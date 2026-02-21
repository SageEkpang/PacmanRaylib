#include "Grid.h"

std::array<std::array<char, GRID_SIZE>, GRID_SIZE> Grid::m_LevelOneArray =
{ {
    {'1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1'},
    {'1', 'P', '0', '0', '1', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '1', '0', '0', 'B', '1'},
    {'1', '0', '1', '0', '1', '0', '1', '1', '1', '1', '1', '0', '1', '1', '1', '1', '1', '0', '1', '0', '1', '0', '1'},
    {'1', '0', '0', '0', '0', '0', '0', '0', '1', '0', '0', '0', '0', '0', '1', '0', '0', '0', '0', '0', '0', '0', '1'},
    {'1', '1', '1', '0', '1', '0', '1', '0', '1', '0', '1', '1', '1', '0', '1', '0', '1', '0', '1', '0', '1', '1', '1'},
    {'1', '0', '0', '0', '1', '0', '1', '0', '1', '0', '1', ' ', '1', '0', '1', '0', '1', '0', '1', '0', '0', '0', '1'},
    {'1', '0', '1', '0', '1', '0', '1', '0', '1', '0', '1', '1', '1', '0', '1', '0', '1', '0', '1', '0', '1', '0', '1'},
    {'1', '0', '0', '0', '1', '0', '1', '0', ' ', '0', ' ', '0', ' ', '0', ' ', '0', '1', '0', '1', '0', '0', '0', '1'},
    {'1', '0', '1', '1', '1', '0', '1', '0', '1', '1', '1', '1', '1', '1', '1', '0', '1', '0', '1', '1', '1', '0', '1'},
    {'1', '0', '0', '0', '0', '0', '1', '0', '0', '0', '0', '0', '0', '0', '0', '0', '1', '0', '0', '0', '0', '0', '1'},
    {'1', ' ', '1', '1', '1', '1', '1', '0', '1', '1', '1', ' ', '1', '1', '1', '0', '1', '1', '1', '1', '1', ' ', '1'},
    {'1', '0', '0', '0', '0', '0', '0', '0', '1', 'G', 'G', ' ', 'G', 'G', '1', '0', '0', '0', '0', '0', '0', '0', '1'},
    {'1', ' ', '1', '1', '1', '1', '1', '0', '1', '1', '1', '1', '1', '1', '1', '0', '1', '1', '1', '1', '1', ' ', '1'},
    {'1', '0', '0', '0', '0', '0', '1', '0', '0', '0', '0', 'C', '0', '0', '0', '0', '1', '0', '0', '0', '0', '0', '1'},
    {'1', '0', '1', '1', '1', '0', '1', '0', '1', '1', '1', '1', '1', '1', '1', '0', '1', '0', '1', '1', '1', '0', '1'},
    {'1', '0', '0', '0', '1', '0', '1', '0', ' ', '0', ' ', '0', ' ', '0', ' ', '0', '1', '0', '1', '0', '0', '0', '1'},
    {'1', '0', '1', '0', '1', '0', '1', '0', '1', '0', '1', '1', '1', '0', '1', '0', '1', '0', '1', '0', '1', '0', '1'},
    {'1', '0', '0', '0', '1', '0', '1', '0', '1', '0', '1', ' ', '1', '0', '1', '0', '1', '0', '1', '0', '0', '0', '1'},
    {'1', '1', '1', '0', '1', '0', '1', '0', '1', '0', '1', '1', '1', '0', '1', '0', '1', '0', '1', '0', '1', '1', '1'},
    {'1', '0', '0', '0', '0', '0', '0', '0', '1', '0', '0', '0', '0', '0', '1', '0', '0', '0', '0', '0', '0', '0', '1'},
    {'1', '0', '1', '0', '1', '0', '1', '1', '1', '1', '1', '0', '1', '1', '1', '1', '1', '0', '1', '0', '1', '0', '1'},
    {'1', 'E', '0', '0', '1', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '1', '0', '0', 'I', '1'},
    {'1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1'},
} };

std::array<std::array<char, GRID_SIZE>, GRID_SIZE> Grid::m_LevelTwoArray =
{ {
    {'1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1'},
    {'1', 'P', '0', '0', '0', '0', '0', '0', '0', '0', '0', '1', '0', '0', '0', '0', '0', '0', '0', '0', '0', 'B', '1'},
    {'1', '0', '1', '1', '0', '1', '1', '1', '1', '1', '0', '1', '0', '1', '1', '1', '1', '1', '0', '1', '1', '0', '1'},
    {'1', '0', '1', '1', '0', '1', '1', '1', '1', '1', '0', '1', '0', '1', '1', '1', '1', '1', '0', '1', '1', '0', '1'},
    {'1', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '1'},
    {'1', '0', '1', '1', '0', '1', '0', '1', '1', '1', '1', '1', '1', '1', '1', '1', '0', '1', '0', '1', '1', '0', '1'},
    {'1', '0', '0', '0', '0', '1', '0', '0', '0', '0', '0', '1', '0', '0', '0', '0', '0', '1', '0', '0', '0', '0', '1'},
    {'1', '1', '1', '1', '0', '1', '1', '1', '1', '1', '0', '1', '0', '1', '1', '1', '1', '1', '0', '1', '1', '1', '1'},
    {' ', ' ', ' ', '1', '0', '1', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '1', '0', '1', ' ', ' ', ' '},
    {'1', '1', '1', '1', '0', '1', '0', '1', '1', '1', '1', ' ', '1', '1', '1', '1', '0', '1', '0', '1', '1', '1', '1'},
    {'1', '0', '0', '0', '0', '0', '0', '1', 'G', 'G', ' ', ' ', ' ', 'G', 'G', '1', '0', '0', '0', '0', '0', '0', '1'},
    {'1', '1', '1', '1', '0', '1', '0', '1', '1', '1', '1', '1', '1', '1', '1', '1', '0', '1', '0', '1', '1', '1', '1'},
    {' ', ' ', ' ', '1', '0', '1', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '1', '0', '1', ' ', ' ', ' '},
    {'1', '1', '1', '1', '0', '1', '0', '1', '1', '1', '1', '1', '1', '1', '1', '1', '0', '1', '0', '1', '1', '1', '1'},
    {'1', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '1', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '1'},
    {'1', '0', '1', '1', '0', '1', '1', '1', '1', '1', '0', '1', '0', '1', '1', '1', '1', '1', '0', '1', '1', '0', '1'},
    {'1', '0', '0', '1', '0', '0', '0', '0', '0', '0', '0', 'C', '0', '0', '0', '0', '0', '0', '0', '1', '0', '0', '1'},
    {'1', '1', '0', '1', '0', '1', '0', '1', '1', '1', '1', '1', '1', '1', '1', '1', '0', '1', '0', '1', '0', '1', '1'},
    {'1', '1', '0', '1', '0', '1', '0', '0', '0', '0', '0', '1', '0', '0', '0', '0', '0', '1', '0', '1', '0', '1', '1'},
    {'1', '0', '0', '0', '0', '1', '0', '1', '0', '1', '0', '1', '0', '1', '0', '1', '0', '1', '0', '0', '0', '0', '1'},
    {'1', '0', '1', '1', '1', '1', '1', '1', '0', '1', '0', '1', '0', '1', '0', '1', '1', '1', '1', '1', '1', '0', '1'},
    {'1', 'E', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', 'I', '1'},
    {'1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1'},
} };

std::array<std::array<char, GRID_SIZE>, GRID_SIZE> Grid::m_LevelThreeArray =
{ {
    {'1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1'},
    {'1', 'P', '0', '0', '0', '0', '1', '0', '0', '0', '0', '0', '0', '0', '0', '0', '1', '0', '0', '0', '0', 'B', '1'},
    {'1', '0', '1', '0', '1', '0', '1', '0', '1', '1', '1', '1', '1', '1', '1', '0', '1', '0', '1', '0', '1', '0', '1'},
    {'1', '0', '0', '0', '1', '0', '0', '0', '1', ' ', ' ', ' ', ' ', ' ', '1', '0', '0', '0', '1', '0', '0', '0', '1'},
    {'1', '1', '1', '1', '1', '0', '1', '0', '1', '1', '1', '1', '1', '1', '1', '0', '1', '0', '1', '1', '1', '1', '1'},
    {'1', '0', '0', '0', '1', '0', '1', '0', '0', '0', '0', '0', '0', '0', '0', '0', '1', '0', '1', '0', '0', '0', '1'},
    {'1', '0', '1', '0', '1', '0', '1', '0', '1', '1', '1', '1', '1', '1', '1', '0', '1', '0', '1', '0', '1', '0', '1'},
    {'1', '0', '1', '0', '1', '0', '1', '0', '0', '0', '0', '0', '0', '0', '0', '0', '1', '0', '1', '0', '1', '0', '1'},
    {'1', '0', '1', '0', '1', '0', '1', '0', '1', '1', '1', ' ', '1', '1', '1', '0', '1', '0', '1', '0', '1', '0', '1'},
    {'1', '0', '0', '0', '0', '0', '1', '0', '1', 'G', 'G', ' ', 'G', 'G', '1', '0', '1', '0', '0', '0', '0', '0', '1'},
    {'1', '1', '1', '0', '1', '1', '1', '0', '1', '1', '1', '1', '1', '1', '1', '0', '1', '1', '1', '0', '1', '1', '1'},
    {'1', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', 'C', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '1'},
    {'1', '0', '1', '0', '1', '1', '1', '1', '0', '1', '1', '1', '1', '1', '0', '1', '1', '1', '1', '0', '1', '0', '1'},
    {'1', '0', '0', '0', '1', ' ', ' ', '1', '0', '0', '0', '0', '0', '0', '0', '1', ' ', ' ', '1', '0', '0', '0', '1'},
    {'1', '0', '1', '0', '1', '1', '1', '1', '0', '1', '1', '1', '1', '1', '0', '1', '1', '1', '1', '0', '1', '0', '1'},
    {'1', '0', '0', '0', '1', '1', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '1', '1', '0', '0', '0', '1'},
    {'1', '1', '1', '0', '1', '1', '0', '1', '0', '1', '1', '1', '1', '1', '0', '1', '0', '1', '1', '0', '1', '1', '1'},
    {' ', ' ', '1', '0', '1', '1', '0', '1', '0', '1', ' ', ' ', ' ', '1', '0', '1', '0', '1', '1', '0', '1', ' ', ' '},
    {' ', ' ', '1', '0', '1', '1', '0', '1', '0', '1', ' ', ' ', ' ', '1', '0', '1', '0', '1', '1', '0', '1', ' ', ' '},
    {' ', ' ', '1', '0', '0', '0', '0', '1', '0', '1', ' ', ' ', ' ', '1', '0', '1', '0', '0', '0', '0', '1', ' ', ' '},
    {' ', ' ', '1', '0', '1', '1', '1', '1', '0', '1', ' ', ' ', ' ', '1', '0', '1', '1', '1', '1', '0', '1', ' ', ' '},
    {' ', ' ', '1', 'E', '0', '0', '0', '0', '0', '1', ' ', ' ', ' ', '1', '0', '0', '0', '0', '0', 'I', '1', ' ', ' '},
    {' ', ' ', '1', '1', '1', '1', '1', '1', '1', '1', ' ', ' ', ' ', '1', '1', '1', '1', '1', '1', '1', '1', ' ', ' '},
} };

Grid::Grid()
{
    // m_LevelMaps[1] = m_LevelOneArray;
    m_PacmanOpen = LoadTexture("Images/Pac-ManOpen.png");
    m_PacmanOpen.width = 20;
    m_PacmanOpen.height = 20;

    m_PacmanClosed = LoadTexture("Images/Pac-ManClosed.png");
    m_PacmanClosed.width = 20;
    m_PacmanClosed.height = 20;

    m_Cherry = LoadTexture("Images/Cherry.png");
    m_Cherry.width = 20;
    m_Cherry.height = 20;

    m_Ghost = LoadTexture("Images/Ghost.png");
    m_Ghost.width = 20;
    m_Ghost.height = 20;

    m_FlappingSound = LoadSound("Sound/Flapping.wav");
    m_GhostNoise = LoadSound("Sound/GhostNoise.wav");
    m_PacmanHit = LoadSound("Sound/Fail.wav");

    m_Score = 0;

    m_IsMouthClosed = true;
}

Grid::~Grid()
{
    ResetGrid();
    UnloadTexture(m_PacmanOpen);
    UnloadTexture(m_PacmanClosed);
    UnloadTexture(m_Cherry);
    UnloadTexture(m_Ghost);

    UnloadSound(m_FlappingSound);
    UnloadSound(m_GhostNoise);
    UnloadSound(m_PacmanHit);
}

void Grid::Update(const float deltaTime)
{
    // NOTE: Transition Level
    if (m_StartTransitionTimer == true)
    {
        m_TransitionCounter += deltaTime;
        if (m_TransitionCounter <= m_TransitionTimer)
        {
            return;
        }
        else
        {
            m_TransitionLevel = true;
            m_StartTransitionTimer = false;
        }
    }

    if ((m_LevelIndex == 3 && m_PointCounter == 0) || m_Lives == 0)
    {
        m_EndOfGame = true;

        if (IsKeyPressed(KEY_ENTER))
        {
            m_RestartGame = true;
            m_EndOfGame = false;
        }
        return;
    }

    // NOTE: Activate Level
    if (m_ActivateLevel == false)
    {
        if (IsKeyPressed(KEY_ENTER))
        {
            m_ActivateLevel = true;
        }

        return;
    }

    MovePlayer(deltaTime);

    ActivateGhosts(deltaTime);
    MoveGhostPosition(deltaTime);

    if (m_PointCounter == 0)
    {
        m_StartTransitionTimer = true;
    }
}

void Grid::Draw()
{
    if (m_EndOfGame == false)
    {
        // DRAW GRID
        // NOTE: Draw Environment
        for (int i = 0; i < GRID_SIZE; ++i)
        {
            for (int j = 0; j < GRID_SIZE; ++j)
            {
                if (m_TileArray[i][j].isObstacle == true)
                {
                    DrawRectangleRounded(Rectangle{ m_TileArray[i][j].m_Position.x, m_TileArray[i][j].m_Position.y, 20, 20 }, 0.4, 20, m_GridColour);
                }
                else if (m_TileArray[i][j].isPointHere == true)
                {
                    Vector2 t_tempPosition = Vector2{ m_TileArray[i][j].m_Position.x + 10, m_TileArray[i][j].m_Position.y + 10 };
                    DrawCircleV(t_tempPosition, 2, ORANGE);
                }
            }
        }

        // DRAW CHARACTER(s)
        // NOTE: Draw Pac-Man
        if (!m_IsMouthClosed)
        {
            DrawTexturePro
            (
                m_PacmanOpen,
                Rectangle{ 20, 20, 20 * m_TextureOffset.x, 20 * m_TextureOffset.y },
                Rectangle{ m_TileArray[(int)m_CharacterPosition.x][(int)m_CharacterPosition.y].m_Position.x + 10, m_TileArray[(int)m_CharacterPosition.x][(int)m_CharacterPosition.y].m_Position.y + 10, 20, 20 },
                Vector2{ 20.f / 2.f, 20.f / 2.f },
                m_Rotation,
                WHITE
            );
        }
        else
        {
            DrawTextureV(m_PacmanClosed, m_TileArray[(int)m_CharacterPosition.x][(int)m_CharacterPosition.y].m_Position, WHITE);
        }

        // NOTE: Draw Ghosts
        DrawTextureV(m_Ghost, m_TileArray[(int)m_GhostPositions[0].m_Position.x][(int)m_GhostPositions[0].m_Position.y].m_Position, RED);
        DrawTextureV(m_Ghost, m_TileArray[(int)m_GhostPositions[1].m_Position.x][(int)m_GhostPositions[1].m_Position.y].m_Position, Color{ 0, 255, 255, 255 });
        DrawTextureV(m_Ghost, m_TileArray[(int)m_GhostPositions[2].m_Position.x][(int)m_GhostPositions[2].m_Position.y].m_Position, PINK);
        DrawTextureV(m_Ghost, m_TileArray[(int)m_GhostPositions[3].m_Position.x][(int)m_GhostPositions[3].m_Position.y].m_Position, ORANGE);

        // NOTE: Draw Level Index
        DrawText(TextFormat("SCORE: %d", m_Score), 300, 470, 20, WHITE);

        // NOTE: Draw Level Complete
        if (m_PointCounter == 0) { DrawText("Level Completed", 120, 470, 20, GREEN); }

        if (m_ActivateLevel == false)
        {
            DrawRectangleRounded(Rectangle{ 95, 200, 265, 85 }, 0.2, 8, BLACK);
            DrawRectangleRoundedLines(Rectangle{ 95, 200, 265, 85 }, 0.2, 8, m_GridColour);
            DrawText("Press Enter", 100, 200, 40, YELLOW);
            DrawText("To Play", 140, 240, 40, YELLOW);
        }

        // NOTE: Draw Lives
        for (int i = 0; i < m_Lives; ++i) { DrawTexture(m_PacmanOpen, (i * 30) + 10, 470, WHITE); }
    }
    else
    {
        DrawText(TextFormat("Total Score: %d", m_Score), 60, 200, 40, WHITE);
        DrawText("Press Enter to Play Again", 100, 240, 20, YELLOW);
    }
}

void Grid::MovePlayer(const float deltaTime)
{
    if (m_TransitionLevel == true) { return; }

    // MOVE CHARACTER
    if (IsKeyPressed(KEY_W) && m_TileArray[(int)m_CharacterPosition.x][(int)m_CharacterPosition.y - 1].isObstacle == false)
    {
        m_PositionOffset = Vector2{ 0, -1 };
        m_TextureOffset = Vector2{ -1, 1 };
        m_Rotation = 90;

    }
    else if (IsKeyPressed(KEY_A) && m_TileArray[(int)m_CharacterPosition.x - 1][(int)m_CharacterPosition.y].isObstacle == false)
    {
        m_PositionOffset = Vector2{ -1, 0 };
        m_TextureOffset = Vector2{ -1, 1 };
        m_Rotation = 0;
    }
    else if (IsKeyPressed(KEY_S) && m_TileArray[(int)m_CharacterPosition.x][(int)m_CharacterPosition.y + 1].isObstacle == false)
    {
        m_PositionOffset = Vector2{ 0, 1 };
        m_TextureOffset = Vector2{ 1, 1 };
        m_Rotation = 90;
    }
    else if (IsKeyPressed(KEY_D) && m_TileArray[(int)m_CharacterPosition.x + 1][(int)m_CharacterPosition.y].isObstacle == false)
    {
        m_PositionOffset = Vector2{ 1, 0 };
        m_TextureOffset = Vector2{ 1, 1 };
        m_Rotation = 0;
    }

    m_FlapCounter += deltaTime;
    if (m_FlapCounter >= m_FlapTimer)
    {
        m_IsMouthClosed = !m_IsMouthClosed;
        m_FlapCounter = 0;
    }

    m_MovementCounter += deltaTime;
    if (m_MovementCounter >= m_MovementTimer)
    {
        if (m_TileArray[(int)m_CharacterPosition.x + (int)m_PositionOffset.x][(int)m_CharacterPosition.y + (int)m_PositionOffset.y].isObstacle == false)
        {
            m_TileArray[(int)m_CharacterPosition.x][(int)m_CharacterPosition.y].isPlayerHere = false;
            m_TileArray[(int)m_CharacterPosition.x + (int)m_PositionOffset.x][(int)m_CharacterPosition.y + (int)m_PositionOffset.y].isPlayerHere = true;

            if (m_TileArray[(int)m_CharacterPosition.x + (int)m_PositionOffset.x][(int)m_CharacterPosition.y + (int)m_PositionOffset.y].isPointHere == true)
            {
                m_TileArray[(int)m_CharacterPosition.x + (int)m_PositionOffset.x][(int)m_CharacterPosition.y + (int)m_PositionOffset.y].isPointHere = false;
                --m_PointCounter;

                if (IsSoundPlaying(m_FlappingSound) == false)
                {
                    SetSoundVolume(m_FlappingSound, 0.2f);
                    PlaySound(m_FlappingSound);
                }

                m_Score += 10;
            }

            m_CharacterPosition.x += m_PositionOffset.x;
            m_CharacterPosition.y += m_PositionOffset.y;
        }

        m_MovementCounter = 0;
    }
}

void Grid::ActivateGhosts(const float deltaTime)
{
    if (m_GhostCounter < 4)
    {
        m_ActivateGhostCounter += deltaTime;
        if (m_ActivateGhostCounter >= m_ActivateGhostTimer)
        {
            ++m_GhostCounter;
            if (m_GhostCounter == 1) { m_BlinkyActivate = true; }
            if (m_GhostCounter == 2) { m_InkyActivate = true; }
            if (m_GhostCounter == 3) { m_PinkyActivate = true; }
            if (m_GhostCounter == 4) { m_ClydeActivate = true; }

            m_ActivateGhostCounter = 0;
        }
    }
}

void Grid::MoveGhostPosition(const float deltaTime)
{
    Vector2 t_BlinkyNextPosition = Vector2{ 0, 0 };
    Vector2 t_InkyNextPosition = Vector2{ 0, 0 };
    Vector2 t_PinkyNextPosition = Vector2{ 0, 0 };

    if (IsSoundPlaying(m_GhostNoise) == false)
    {
        SetSoundVolume(m_GhostNoise, 0.2f);
        PlaySound(m_GhostNoise);
    }

    // Blinky (Done)
    if (m_BlinkyActivate == true)
    {
        m_BlinkyCounter += deltaTime;
        if (m_BlinkyCounter >= m_BlinkyTimer)
        {
            // NOTE: Check the Last Tile Visited
            t_BlinkyNextPosition = SolveAStar(&m_TileArray[(int)m_GhostPositions[0].m_Position.x][(int)m_GhostPositions[0].m_Position.y], &m_TileArray[(int)m_CharacterPosition.x][(int)m_CharacterPosition.y], BLANK);

            int t_DirectionX = (int)m_GhostPositions[0].m_Position.x + (int)m_GhostPositions[0].m_DirectionX;
            int t_DirectionY = (int)m_GhostPositions[0].m_Position.y + (int)m_GhostPositions[0].m_DirectionY;

            if ((int)(t_BlinkyNextPosition.x / 20) == 0 && (int)(t_BlinkyNextPosition.y / 20) == 0)
            {
                m_TileArray[t_DirectionX][t_DirectionY].isGhostHere = true;
                m_TileArray[(int)m_GhostPositions[0].m_Position.x][(int)m_GhostPositions[0].m_Position.y].isGhostHere = false;
                m_GhostPositions[0].m_DirectionX = t_DirectionX - (int)m_GhostPositions[0].m_Position.x;
                m_GhostPositions[0].m_DirectionY = t_DirectionY - (int)m_GhostPositions[0].m_Position.y;
                m_GhostPositions[0].m_Position.x = t_DirectionX;
                m_GhostPositions[0].m_Position.y = t_DirectionY;
            }
            else
            {
                Vector2 t_tempDirection = Vector2{ (t_BlinkyNextPosition.x / 20) - m_GhostPositions[0].m_Position.x, (t_BlinkyNextPosition.y / 20) - m_GhostPositions[0].m_Position.y };

                // NOTE: Checks if the ghost is trying to go backwards
                if ((int)m_GhostPositions[0].m_DirectionX == (int)(t_tempDirection.x * -1)
                    && (int)m_GhostPositions[0].m_DirectionY == (int)(t_tempDirection.y * -1)
                    && m_TileArray[t_DirectionX][t_DirectionY].isObstacle == false)
                {
                    m_TileArray[t_DirectionX][t_DirectionY].isGhostHere = true;
                    m_TileArray[(int)m_GhostPositions[0].m_Position.x][(int)m_GhostPositions[0].m_Position.y].isGhostHere = false;
                    m_GhostPositions[0].m_DirectionX = t_DirectionX - (int)m_GhostPositions[0].m_Position.x;
                    m_GhostPositions[0].m_DirectionY = t_DirectionY - (int)m_GhostPositions[0].m_Position.y;
                    m_GhostPositions[0].m_Position.x = t_DirectionX;
                    m_GhostPositions[0].m_Position.y = t_DirectionY;
                }
                else
                {
                    m_TileArray[(int)(t_BlinkyNextPosition.x / 20)][(int)(t_BlinkyNextPosition.y / 20)].isGhostHere = true;
                    m_TileArray[(int)m_GhostPositions[0].m_Position.x][(int)m_GhostPositions[0].m_Position.y].isGhostHere = false;
                    m_GhostPositions[0].m_DirectionX = (int)(t_BlinkyNextPosition.x / 20) - (int)m_GhostPositions[0].m_Position.x;
                    m_GhostPositions[0].m_DirectionY = (int)(t_BlinkyNextPosition.y / 20) - (int)m_GhostPositions[0].m_Position.y;
                    m_GhostPositions[0].m_Position.x = (int)(t_BlinkyNextPosition.x / 20);
                    m_GhostPositions[0].m_Position.y = (int)(t_BlinkyNextPosition.y / 20);
                }
            }

            m_BlinkyCounter = 0;
        }
    }

    // Inky (Done)
    if (m_InkyActivate == true)
    {
        m_InkyCounter += deltaTime;
        if (m_InkyCounter >= m_InkyTimer)
        {
            // NOTE: Get Two Grid Spaces Infront of Pacman
            if (
                ((((int)m_CharacterPosition.x + (int)(m_PositionOffset.x * 8)) < GRID_SIZE - 1 && (int)m_CharacterPosition.x + (int)(m_PositionOffset.x * 8) > 0) &&
                    (((int)m_CharacterPosition.y + (int)(m_PositionOffset.y * 8)) < GRID_SIZE - 1 && (int)m_CharacterPosition.y + (int)(m_PositionOffset.y * 8) > 0)) &&
                (&m_TileArray[(int)m_CharacterPosition.x + (int)(m_PositionOffset.x * 8)][(int)m_CharacterPosition.y + (int)(m_PositionOffset.y * 8)])->isObstacle == false)
            {
                t_InkyNextPosition = SolveAStar(&m_TileArray[(int)m_GhostPositions[1].m_Position.x][(int)m_GhostPositions[1].m_Position.y], &m_TileArray[(int)m_CharacterPosition.x + (int)(m_PositionOffset.x * 8)][(int)m_CharacterPosition.y + (int)(m_PositionOffset.y * 8)], BLANK);
            }
            else
            {
                t_InkyNextPosition = SolveAStar(&m_TileArray[(int)m_GhostPositions[1].m_Position.x][(int)m_GhostPositions[1].m_Position.y], &m_TileArray[(int)m_CharacterPosition.x][(int)m_CharacterPosition.y], BLANK);
            }

            int t_DirectionX = (int)m_GhostPositions[1].m_Position.x + (int)m_GhostPositions[1].m_DirectionX;
            int t_DirectionY = (int)m_GhostPositions[1].m_Position.y + (int)m_GhostPositions[1].m_DirectionY;

            if ((int)(t_InkyNextPosition.x / 20) == 0 && (int)(t_InkyNextPosition.y / 20) == 0)
            {
                m_TileArray[t_DirectionX][t_DirectionY].isGhostHere = true;
                m_TileArray[(int)m_GhostPositions[1].m_Position.x][(int)m_GhostPositions[1].m_Position.y].isGhostHere = false;
                m_GhostPositions[1].m_DirectionX = t_DirectionX - (int)m_GhostPositions[1].m_Position.x;
                m_GhostPositions[1].m_DirectionY = t_DirectionY - (int)m_GhostPositions[1].m_Position.y;
                m_GhostPositions[1].m_Position.x = t_DirectionX;
                m_GhostPositions[1].m_Position.y = t_DirectionY;
            }
            else
            {
                Vector2 t_tempDirection = Vector2{ (t_InkyNextPosition.x / 20) - m_GhostPositions[1].m_Position.x, (t_InkyNextPosition.y / 20) - m_GhostPositions[1].m_Position.y };
                t_tempDirection = Vector2Normalize(t_tempDirection);

                // NOTE: Checks if the ghost is trying to go backwards
                if ((int)m_GhostPositions[1].m_DirectionX == (int)(t_tempDirection.x * -1)
                    && (int)m_GhostPositions[1].m_DirectionY == (int)(t_tempDirection.y * -1)
                    && m_TileArray[t_DirectionX][t_DirectionY].isObstacle == false)
                {
                    m_TileArray[t_DirectionX][t_DirectionY].isGhostHere = true;
                    m_TileArray[(int)m_GhostPositions[1].m_Position.x][(int)m_GhostPositions[1].m_Position.y].isGhostHere = false;
                    m_GhostPositions[1].m_DirectionX = t_DirectionX - (int)m_GhostPositions[1].m_Position.x;
                    m_GhostPositions[1].m_DirectionY = t_DirectionY - (int)m_GhostPositions[1].m_Position.y;
                    m_GhostPositions[1].m_Position.x = t_DirectionX;
                    m_GhostPositions[1].m_Position.y = t_DirectionY;
                }
                else
                {
                    m_TileArray[(int)(t_InkyNextPosition.x / 20)][(int)(t_InkyNextPosition.y / 20)].isGhostHere = true;
                    m_TileArray[(int)m_GhostPositions[1].m_Position.x][(int)m_GhostPositions[1].m_Position.y].isGhostHere = false;
                    m_GhostPositions[1].m_DirectionX = (int)(t_InkyNextPosition.x / 20) - (int)m_GhostPositions[1].m_Position.x;
                    m_GhostPositions[1].m_DirectionY = (int)(t_InkyNextPosition.y / 20) - (int)m_GhostPositions[1].m_Position.y;
                    m_GhostPositions[1].m_Position.x = (int)(t_InkyNextPosition.x / 20);
                    m_GhostPositions[1].m_Position.y = (int)(t_InkyNextPosition.y / 20);
                }
            }

            m_InkyCounter = 0;
        }
    }

    // Pinky (Done)
    if (m_PinkyActivate == true)
    {
        m_PinkyCounter += deltaTime;
        if (m_PinkyCounter >= m_PinkyTimer)
        {
            if (
                ((((int)m_CharacterPosition.x + (int)(m_PositionOffset.x * 4)) < GRID_SIZE - 1 && (int)m_CharacterPosition.x + (int)(m_PositionOffset.x * 4) > 0) &&
                    (((int)m_CharacterPosition.y + (int)(m_PositionOffset.y * 4)) < GRID_SIZE - 1 && (int)m_CharacterPosition.y + (int)(m_PositionOffset.y * 4) > 0)) &&
                (&m_TileArray[(int)m_CharacterPosition.x + (int)(m_PositionOffset.x * 4)][(int)m_CharacterPosition.y + (int)(m_PositionOffset.y * 4)])->isObstacle == false)
            {
                t_PinkyNextPosition = SolveAStar(&m_TileArray[(int)m_GhostPositions[2].m_Position.x][(int)m_GhostPositions[2].m_Position.y], &m_TileArray[(int)m_CharacterPosition.x + (int)(m_PositionOffset.x * 4)][(int)m_CharacterPosition.y + (int)(m_PositionOffset.y * 4)], BLANK);
            }
            else
            {
                t_PinkyNextPosition = SolveAStar(&m_TileArray[(int)m_GhostPositions[2].m_Position.x][(int)m_GhostPositions[2].m_Position.y], &m_TileArray[(int)m_CharacterPosition.x][(int)m_CharacterPosition.y], BLANK);
            }

            int t_DirectionX = (int)m_GhostPositions[2].m_Position.x + (int)m_GhostPositions[2].m_DirectionX;
            int t_DirectionY = (int)m_GhostPositions[2].m_Position.y + (int)m_GhostPositions[2].m_DirectionY;

            if ((int)(t_PinkyNextPosition.x / 20) == 0 && (int)(t_PinkyNextPosition.y / 20) == 0)
            {
                m_TileArray[t_DirectionX][t_DirectionY].isGhostHere = true;
                m_TileArray[(int)m_GhostPositions[2].m_Position.x][(int)m_GhostPositions[2].m_Position.y].isGhostHere = false;
                m_GhostPositions[2].m_DirectionX = t_DirectionX - (int)m_GhostPositions[2].m_Position.x;
                m_GhostPositions[2].m_DirectionY = t_DirectionY - (int)m_GhostPositions[2].m_Position.y;
                m_GhostPositions[2].m_Position.x = t_DirectionX;
                m_GhostPositions[2].m_Position.y = t_DirectionY;
            }
            else
            {
                Vector2 t_tempDirection = Vector2{ (t_PinkyNextPosition.x / 20) - m_GhostPositions[2].m_Position.x, (t_PinkyNextPosition.y / 20) - m_GhostPositions[2].m_Position.y };
                t_tempDirection = Vector2Normalize(t_tempDirection);

                // NOTE: Checks if the ghost is trying to go backwards
                if ((int)m_GhostPositions[2].m_DirectionX == (int)(t_tempDirection.x * -1)
                    && (int)m_GhostPositions[2].m_DirectionY == (int)(t_tempDirection.y * -1)
                    && m_TileArray[t_DirectionX][t_DirectionY].isObstacle == false)
                {
                    m_TileArray[t_DirectionX][t_DirectionY].isGhostHere = true;
                    m_TileArray[(int)m_GhostPositions[2].m_Position.x][(int)m_GhostPositions[2].m_Position.y].isGhostHere = false;
                    m_GhostPositions[2].m_DirectionX = t_DirectionX - (int)m_GhostPositions[2].m_Position.x;
                    m_GhostPositions[2].m_DirectionY = t_DirectionY - (int)m_GhostPositions[2].m_Position.y;
                    m_GhostPositions[2].m_Position.x = t_DirectionX;
                    m_GhostPositions[2].m_Position.y = t_DirectionY;
                }
                else
                {
                    m_TileArray[(int)(t_PinkyNextPosition.x / 20)][(int)(t_PinkyNextPosition.y / 20)].isGhostHere = true;
                    m_TileArray[(int)m_GhostPositions[2].m_Position.x][(int)m_GhostPositions[2].m_Position.y].isGhostHere = false;
                    m_GhostPositions[2].m_DirectionX = (int)(t_PinkyNextPosition.x / 20) - (int)m_GhostPositions[2].m_Position.x;
                    m_GhostPositions[2].m_DirectionY = (int)(t_PinkyNextPosition.y / 20) - (int)m_GhostPositions[2].m_Position.y;
                    m_GhostPositions[2].m_Position.x = (int)(t_PinkyNextPosition.x / 20);
                    m_GhostPositions[2].m_Position.y = (int)(t_PinkyNextPosition.y / 20);
                }
            }

            m_PinkyCounter = 0;
        }
    }

    // Clyde (Done)
    if (m_ClydeActivate == true)
    {
        m_ClydeCounter += deltaTime;
        if (m_ClydeCounter >= m_ClydeTimer)
        {
            if ((int)Vector2Distance(Vector2{ (t_ClydeNextPosition.x / 20), (t_ClydeNextPosition.y / 20) }, m_CharacterPosition) >= 4.f)
            {
                t_ClydeNextPosition = SolveAStar(&m_TileArray[(int)m_GhostPositions[3].m_Position.x][(int)m_GhostPositions[3].m_Position.y], &m_TileArray[(int)m_CharacterPosition.x][(int)m_CharacterPosition.y], BLANK);
            }
            else
            {
                t_ClydeNextPosition = SolveAStar(&m_TileArray[(int)m_GhostPositions[3].m_Position.x][(int)m_GhostPositions[3].m_Position.y], &m_TileArray[(int)m_ClydeScatterPosition.x][(int)m_ClydeScatterPosition.y], BLANK);
            }

            int t_DirectionX = (int)m_GhostPositions[3].m_Position.x + (int)m_GhostPositions[3].m_DirectionX;
            int t_DirectionY = (int)m_GhostPositions[3].m_Position.y + (int)m_GhostPositions[3].m_DirectionY;

            if ((int)(t_ClydeNextPosition.x / 20) == 0 && (int)(t_ClydeNextPosition.y / 20))
            {
                m_TileArray[t_DirectionX][t_DirectionY].isGhostHere = true;
                m_TileArray[(int)m_GhostPositions[3].m_Position.x][(int)m_GhostPositions[3].m_Position.y].isGhostHere = false;
                m_GhostPositions[3].m_DirectionX = t_DirectionX - (int)m_GhostPositions[3].m_Position.x;
                m_GhostPositions[3].m_DirectionY = t_DirectionY - (int)m_GhostPositions[3].m_Position.y;
                m_GhostPositions[3].m_Position.x = t_DirectionX;
                m_GhostPositions[3].m_Position.y = t_DirectionY;
            }
            else
            {
                Vector2 t_tempDirection = Vector2{ (t_ClydeNextPosition.x / 20) - m_GhostPositions[3].m_Position.x, (t_ClydeNextPosition.y / 20) - m_GhostPositions[3].m_Position.y };

                // NOTE: Checks if the ghost is trying to go backwards
                if ((int)m_GhostPositions[3].m_DirectionX == (int)(t_tempDirection.x * -1)
                    && (int)m_GhostPositions[3].m_DirectionY == (int)(t_tempDirection.y * -1)
                    && m_TileArray[t_DirectionX][t_DirectionY].isObstacle == false)
                {
                    m_TileArray[t_DirectionX][t_DirectionY].isGhostHere = true;
                    m_TileArray[(int)m_GhostPositions[3].m_Position.x][(int)m_GhostPositions[3].m_Position.y].isGhostHere = false;
                    m_GhostPositions[3].m_DirectionX = t_DirectionX - (int)m_GhostPositions[3].m_Position.x;
                    m_GhostPositions[3].m_DirectionY = t_DirectionY - (int)m_GhostPositions[3].m_Position.y;
                    m_GhostPositions[3].m_Position.x = t_DirectionX;
                    m_GhostPositions[3].m_Position.y = t_DirectionY;
                }
                else
                {
                    m_TileArray[(int)(t_ClydeNextPosition.x / 20)][(int)(t_ClydeNextPosition.y / 20)].isGhostHere = true;
                    m_TileArray[(int)m_GhostPositions[3].m_Position.x][(int)m_GhostPositions[3].m_Position.y].isGhostHere = false;
                    m_GhostPositions[3].m_DirectionX = (int)(t_ClydeNextPosition.x / 20) - (int)m_GhostPositions[3].m_Position.x;
                    m_GhostPositions[3].m_DirectionY = (int)(t_ClydeNextPosition.y / 20) - (int)m_GhostPositions[3].m_Position.y;
                    m_GhostPositions[3].m_Position.x = (int)(t_ClydeNextPosition.x / 20);
                    m_GhostPositions[3].m_Position.y = (int)(t_ClydeNextPosition.y / 20);
                }
            }

            m_ClydeCounter = 0;
        }
    }

    if (
        Vector2Equals(m_TileArray[(int)m_GhostPositions[0].m_Position.x][(int)m_GhostPositions[0].m_Position.y].m_Position, m_TileArray[(int)m_CharacterPosition.x][(int)m_CharacterPosition.y].m_Position) ||
        Vector2Equals(m_TileArray[(int)m_GhostPositions[1].m_Position.x][(int)m_GhostPositions[1].m_Position.y].m_Position, m_TileArray[(int)m_CharacterPosition.x][(int)m_CharacterPosition.y].m_Position) ||
        Vector2Equals(m_TileArray[(int)m_GhostPositions[2].m_Position.x][(int)m_GhostPositions[2].m_Position.y].m_Position, m_TileArray[(int)m_CharacterPosition.x][(int)m_CharacterPosition.y].m_Position) ||
        Vector2Equals(m_TileArray[(int)m_GhostPositions[3].m_Position.x][(int)m_GhostPositions[3].m_Position.y].m_Position, m_TileArray[(int)m_CharacterPosition.x][(int)m_CharacterPosition.y].m_Position))
    {
        --m_Lives;

        t_BlinkyNextPosition = Vector2{ 0, 0 };
        t_InkyNextPosition = Vector2{ 0, 0 };
        t_PinkyNextPosition = Vector2{ 0, 0 };
        t_ClydeNextPosition = Vector2{ 0, 0 };

        m_GhostPositions[0].m_Position.x = m_BlinkyDefaultPosition.x;
        m_GhostPositions[0].m_Position.y = m_BlinkyDefaultPosition.y;
        m_TileArray[(int)m_GhostPositions[0].m_Position.x][(int)m_GhostPositions[0].m_Position.y].isGhostHere;

        m_GhostPositions[1].m_Position.x = m_InkyDefaultPosition.x;
        m_GhostPositions[1].m_Position.y = m_InkyDefaultPosition.y;
        m_TileArray[(int)m_GhostPositions[1].m_Position.x][(int)m_GhostPositions[1].m_Position.y].isGhostHere;

        m_GhostPositions[2].m_Position.x = m_PinkyDefaultPosition.x;
        m_GhostPositions[2].m_Position.y = m_PinkyDefaultPosition.y;
        m_TileArray[(int)m_GhostPositions[2].m_Position.x][(int)m_GhostPositions[2].m_Position.y].isGhostHere;

        m_GhostPositions[3].m_Position.x = m_ClydeDefaultPosition.x;
        m_GhostPositions[3].m_Position.y = m_ClydeDefaultPosition.y;
        m_TileArray[(int)m_GhostPositions[3].m_Position.x][(int)m_GhostPositions[3].m_Position.y].isGhostHere;

        if (IsSoundPlaying(m_PacmanHit) == false)
        {
            SetSoundVolume(m_PacmanHit, 0.2f);
            PlaySound(m_PacmanHit);
        }

    }

}

Vector2 Grid::SolveAStar(Tile* ghostTile, Tile* pacmanTile, Color colour)
{
    for (int i = 0; i < GRID_SIZE; ++i)
    {
        for (int j = 0; j < GRID_SIZE; ++j)
        {
            m_TileArray[i][j].isVisited = false;
            m_TileArray[i][j].GlobalGoal = std::numeric_limits<float>::infinity();
            m_TileArray[i][j].LocalGoal = std::numeric_limits<float>::infinity();
            m_TileArray[i][j].parent = nullptr;
        }
    }

    auto distance = [](Tile* a, Tile* b)
        {
            return sqrtf(
                (a->pathfindPosition.x - b->pathfindPosition.x) * (a->pathfindPosition.x - b->pathfindPosition.x) +
                (a->pathfindPosition.y - b->pathfindPosition.y) * (a->pathfindPosition.y - b->pathfindPosition.y)
            );
        };

    auto heuristic = [distance](Tile* a, Tile* b)
        {
            return distance(a, b);
        };

    Tile* t_TileCurrent = ghostTile;
    ghostTile->LocalGoal = 0.0f;
    ghostTile->GlobalGoal = heuristic(ghostTile, pacmanTile);

    std::list<Tile*> t_ListNotTestedTiles;
    t_ListNotTestedTiles.push_back(ghostTile);

    while (!t_ListNotTestedTiles.empty() && t_TileCurrent != pacmanTile)
    {
        t_ListNotTestedTiles.sort([](const Tile* lhs, const Tile* rhs) {return lhs->GlobalGoal < rhs->GlobalGoal; });

        while (!t_ListNotTestedTiles.empty() && t_ListNotTestedTiles.front()->isVisited)
        {
            t_ListNotTestedTiles.pop_front();
        }

        if (t_ListNotTestedTiles.empty())
        {
            break;
        }

        t_TileCurrent = t_ListNotTestedTiles.front();
        t_TileCurrent->isVisited = true;

        for (auto NodeNeighbur : t_TileCurrent->Neighbours)
        {
            if (!NodeNeighbur->isVisited && NodeNeighbur->isObstacle == 0)
            {
                t_ListNotTestedTiles.push_back(NodeNeighbur);
            }

            float t_PossibleLowerGoal = t_TileCurrent->LocalGoal + distance(t_TileCurrent, NodeNeighbur);

            if (t_PossibleLowerGoal < NodeNeighbur->LocalGoal)
            {
                NodeNeighbur->parent = t_TileCurrent;
                NodeNeighbur->LocalGoal = t_PossibleLowerGoal;
                NodeNeighbur->GlobalGoal = NodeNeighbur->LocalGoal + heuristic(NodeNeighbur, pacmanTile);
            }
        }
    }

    if (pacmanTile != nullptr)
    {
        Tile* p = pacmanTile;

        while (p->parent != nullptr)
        {
            DrawLineV(p->pathfindPosition, p->parent->pathfindPosition, colour);

            if (p->parent->parent == nullptr && p->parent != nullptr)
            {
                return p->pathfindPosition;
            }

            p = p->parent;
        }
    }

    return Vector2{ 0, 0 };
}

bool Grid::Vector2Equals(Vector2 value1, Vector2 value2)
{
    if (value1.x == value2.x && value1.y == value2.y)
    {
        return true;
    }

    return false;
}

void Grid::ResetGrid()
{
    m_Lives = 3;
    m_PointCounter = 0;
    m_PositionOffset = Vector2{ 0, 0 };
    m_Rotation = 0;

    m_MovementCounter = 0;
    m_FlapCounter = 0;
    m_TransitionCounter = 0;
    m_TransitionLevel = false;
    m_StartTransitionTimer = false;

    m_BlinkyCounter = 0;
    m_InkyCounter = 0;
    m_PinkyCounter = 0;
    m_ClydeCounter = 0;

    m_BlinkyActivate = false;
    m_InkyActivate = false;
    m_PinkyActivate = false;
    m_ClydeActivate = false;

    m_GhostCounter = 0;

    m_ActivateLevel = false;

    m_GhostPositions.clear();

    for (int i = 0; i < GRID_SIZE; ++i)
    {
        Tile t_temp;
        t_temp.m_Position.x = (i * 20);

        for (int j = 0; j < GRID_SIZE; ++j)
        {
            t_temp.m_Position.y = (j * 20);
            t_temp.isObstacle = false;
            t_temp.isPlayerHere = false;
            t_temp.isPointHere = false;
            m_TileArray[i][j] = t_temp;
        }
    }
}

void Grid::LoadLevel(int levelIndex)
{
    // FILL GRID
    m_LevelIndex = levelIndex;

    std::array<std::array<char, GRID_SIZE>, GRID_SIZE> m_TempArray;

    // NOTE: Load the Appropriate Level
    if (levelIndex == 1) { m_TempArray = m_LevelOneArray; m_GridColour = BLUE; }
    if (levelIndex == 2) { m_TempArray = m_LevelTwoArray; m_GridColour = GREEN; }
    if (levelIndex == 3) { m_TempArray = m_LevelThreeArray; m_GridColour = PURPLE; }

    // NOTE: Load In Data for Tile Set and Nodes
    for (float i = 0; i < GRID_SIZE; ++i)
    {
        for (float j = 0; j < GRID_SIZE; ++j)
        {
            m_TileArray[(int)j][(int)i].isObstacle = false;
            m_TileArray[(int)j][(int)i].parent = nullptr;
            m_TileArray[(int)j][(int)i].isVisited = false;

            if (m_TempArray[i][j] == ' ')
            {
                m_TileArray[(int)j][(int)i].isBlankHere = true;
            }

            if (m_TempArray[i][j] == '1')
            {
                m_TileArray[(int)j][(int)i].isObstacle = true;
            }

            if (m_TempArray[i][j] == '0')
            {
                m_TileArray[(int)j][(int)i].isPointHere = true;
                ++m_PointCounter;
            }

            if (m_TempArray[i][j] == 'I')
            {
                m_InkyScatterPosition = Vector2{ j, i };
                m_TileArray[(int)j][(int)i].isPointHere = true;
                ++m_PointCounter;
            }

            if (m_TempArray[i][j] == 'B')
            {
                m_BlinkyScatterPosition = Vector2{ j, i };
                m_TileArray[(int)j][(int)i].isPointHere = true;
                ++m_PointCounter;
            }

            if (m_TempArray[i][j] == 'P')
            {
                m_PinkyScatterPosition = Vector2{ j, i };
                m_TileArray[(int)j][(int)i].isPointHere = true;
                ++m_PointCounter;
            }

            if (m_TempArray[i][j] == 'E')
            {
                m_ClydeScatterPosition = Vector2{ j, i };
                m_TileArray[(int)j][(int)i].isPointHere = true;
                ++m_PointCounter;
            }

            if (m_TempArray[i][j] == 'C')
            {
                m_TileArray[(int)j][(int)i].isPlayerHere = true;
                m_CharacterPosition = Vector2{ (float)j, (float)i };
            }

            if (m_TempArray[i][j] == 'G')
            {
                m_TileArray[(int)j][(int)i].isGhostHere = true;
                m_GhostPositions.push_back(Ghost{ Vector2{(float)j , (float)i}, 1, 0, WHITE });
            }

            m_TileArray[(int)j][(int)i].pathfindPosition = Vector2{ (j * 20) + 10, (i * 20) + 10 };
        }
    }

    m_BlinkyDefaultPosition = m_GhostPositions[0].m_Position;
    m_InkyDefaultPosition = m_GhostPositions[1].m_Position;
    m_PinkyDefaultPosition = m_GhostPositions[2].m_Position;
    m_ClydeDefaultPosition = m_GhostPositions[3].m_Position;

    // NOTE: Link Nodes
    for (int i = 0; i < GRID_SIZE; ++i)
    {
        for (int j = 0; j < GRID_SIZE; ++j)
        {
            if (j > 0)
            {
                m_TileArray[i][j].Neighbours.push_back(&m_TileArray[i][j - 1]);
            }

            if (j < GRID_SIZE - 1)
            {
                m_TileArray[i][j].Neighbours.push_back(&m_TileArray[i][j + 1]);
            }

            if (i > 0)
            {
                m_TileArray[i][j].Neighbours.push_back(&m_TileArray[i - 1][j]);
            }

            if (i < GRID_SIZE - 1)
            {
                m_TileArray[i][j].Neighbours.push_back(&m_TileArray[i + 1][j]);
            }
        }
    }

}
