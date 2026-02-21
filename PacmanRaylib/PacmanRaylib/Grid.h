#include <raylib.h>
#include <raymath.h>
#include <vector>
#include <array>
#include <list>
#include <limits>

struct Tile
{
    Vector2 m_Position;
    bool isObstacle;
    bool isPlayerHere;
    bool isPointHere;
    bool isGhostHere;
    bool isBlankHere;

    // NOTE: Path Finding
    bool isVisited = false;
    float GlobalGoal;
    float LocalGoal;
    Vector2 pathfindPosition;
    std::vector<Tile*> Neighbours;
    Tile* parent = nullptr;
};

struct Ghost
{
    Vector2 m_Position;
    signed int m_DirectionX;
    signed int m_DirectionY;
    Color m_Colour;
};

// Ghosts
/*

    Blinky (Red) -> Follows pacman, heads to upper right corner during scatter mode, angry mode triggered when pellets reach a certain threshold
    Inky (Blue) -> Target is relative to blinky and pac-man,  ,heads to the lower righr corner during scatter mode
    Pinky (Pink) -> Chases towards the spot 2 dots in front of pac-man, heads to the upper left corner during scatter mode
    Clyde (Orange) -> Cashes directly after pac-man but tries to heads to scatter corner within 8 dots radius of pac-man, heads to the lower left corner when scattering

*/

// NOTE: Has to be uniform
#define GRID_SIZE 23
#define FLAP_TIME 0.1
#define MOVEMENT_TIME 0.2
#define TRANSITION_TIME 2

#define BLINKY_TIMER 0.3
#define INKY_TIMER 0.3
#define PINKY_TIMER 0.3
#define CLYDE_TIMER 0.3

#define GHOST_ACTIVATE_TIMER 3

class Grid
{
private:

    // Audio Variable(s)
    Sound m_GhostNoise;
    Sound m_FlappingSound;
    Sound m_PacmanHit;

    // Texture Variable(s)
    Texture2D m_Cherry;
    Texture2D m_Ghost;
    Texture2D m_PacmanOpen;
    Texture2D m_PacmanClosed;

    // Score Variable(s)
    int m_PointCounter = 0;
    int m_Score;

    // Player Variable(s)
    bool m_IsMouthClosed = false;

    int m_Lives;
    Vector2 m_CharacterPosition = Vector2{ 0, 0 };
    Vector2 m_PositionOffset = Vector2{ 0, 0 };
    Vector2 m_TextureOffset = Vector2{ 1, 1 };

    float m_Rotation = 0.f;

    float m_MovementTimer = MOVEMENT_TIME;
    float m_MovementCounter = 0;

    float m_FlapTimer = FLAP_TIME;
    float m_FlapCounter = 0;


    // Ghost Variable(s)
    std::vector<Ghost> m_GhostPositions;

    float m_BlinkyTimer = BLINKY_TIMER;
    float m_BlinkyCounter = 0;
    bool m_BlinkyActivate = false;
    Vector2 m_BlinkyDefaultPosition = Vector2{ 0, 0 };
    Vector2 m_BlinkyScatterPosition = Vector2{ 0, 0 };

    float m_InkyTimer = INKY_TIMER;
    float m_InkyCounter = 0;
    bool m_InkyActivate = false;
    Vector2 m_InkyDefaultPosition = Vector2{ 0, 0 };
    Vector2 m_InkyScatterPosition = Vector2{ 0, 0 };

    float m_PinkyTimer = PINKY_TIMER;
    float m_PinkyCounter = 0;
    bool m_PinkyActivate = false;
    Vector2 m_PinkyDefaultPosition = Vector2{ 0, 0 };
    Vector2 m_PinkyScatterPosition = Vector2{ 0, 0 };

    float m_ClydeTimer = CLYDE_TIMER;
    float m_ClydeCounter = 0;
    bool m_ClydeActivate = false;
    Vector2 m_ClydeDefaultPosition = Vector2{ 0, 0 };
    Vector2 m_ClydeScatterPosition = Vector2{ 0,0 };
    Vector2 t_ClydeNextPosition = Vector2{ 0, 0 };

    float m_ActivateGhostTimer = GHOST_ACTIVATE_TIMER;
    float m_ActivateGhostCounter = 0;
    float m_GhostCounter = 0;


    // Grid Variable(s)
    Tile m_TileArray[GRID_SIZE][GRID_SIZE];


    // Level Variable(s)
    int m_LevelIndex;
    bool m_ActivateLevel = false;
    bool m_EndOfGame = false;
    bool m_RestartGame = false;
    bool m_TransitionLevel;
    bool m_StartTransitionTimer = false;
    float m_TransitionTimer = TRANSITION_TIME;
    float m_TransitionCounter = 0;
    Color m_GridColour;

    static std::array<std::array<char, GRID_SIZE>, GRID_SIZE> m_LevelOneArray;
    static std::array<std::array<char, GRID_SIZE>, GRID_SIZE> m_LevelTwoArray;
    static std::array<std::array<char, GRID_SIZE>, GRID_SIZE> m_LevelThreeArray;

public:

    // CLASS FUNCTION(s)
    Grid();
    ~Grid();

    // BASE FUNCTION(s)
    void Update(const float deltaTime);
    void Draw();

    // LEVEL FUNCTION(s)
    void ResetGrid();
    void LoadLevel(int levelIndex);

    // PLAYER FUNCTION(s)
    void MovePlayer(const float deltaTime);

    // GHOST FUNCTION(s)
    void ActivateGhosts(const float deltaTime);
    void MoveGhostPosition(const float deltaTime);

    Vector2 SolveAStar(Tile* ghostTile, Tile* pacmanTile, Color colour);

    // GETTER FUNCTION(s)
    inline bool GetTransitioninLevel() { return m_TransitionLevel; }
    inline bool GetRestartGame() { return m_RestartGame; }

    inline void SetRestartGame(bool restartGame) { m_RestartGame = restartGame; }

    // HELPER FUNCTION(s)
    bool Vector2Equals(Vector2 value1, Vector2 value2);

};