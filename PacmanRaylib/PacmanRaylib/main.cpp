#include <raylib.h>
#include <raymath.h>
#include <vector>

#include "Grid.h"

int main()
{
    // NOTE: Init Window
    InitWindow(460, 500, "Pacman");
    InitAudioDevice();

    // NOTE: Level Swap Variable(s)
    int g_LevelIndex = 3;

    // NOTE: Init Grid Manager
    Grid* m_GridManager = new Grid();

    m_GridManager->ResetGrid();
    m_GridManager->LoadLevel(g_LevelIndex);

    SetTargetFPS(10);
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);

        if (m_GridManager->GetTransitioninLevel() == true)
        {
            ++g_LevelIndex;
            m_GridManager->ResetGrid();
            m_GridManager->LoadLevel(g_LevelIndex);
        }

        float t_DeltaTime = GetFrameTime();
        m_GridManager->Update(t_DeltaTime);
        m_GridManager->Draw();

        if (m_GridManager->GetRestartGame() == true)
        {
            g_LevelIndex = 1;
            m_GridManager->ResetGrid();
            m_GridManager->LoadLevel(g_LevelIndex);
            m_GridManager->SetRestartGame(false);
        }

        EndDrawing();
    }

    delete m_GridManager;

    CloseAudioDevice();
    CloseWindow();
    return 0;
}