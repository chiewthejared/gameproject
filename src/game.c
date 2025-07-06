#include "raylib.h"
#include "game.h"

void run_game() {
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "C Game Project");

    SetTargetFPS(60);

    // Main game loop
    while (!WindowShouldClose()) {
        // --- Update ---
        // Player movement, NPC movement, collision detection, etc.

        // --- Draw ---
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawText("Game Started!", 190, 200, 20, LIGHTGRAY);
        // Draw player, NPCs, coins, etc.

        EndDrawing();
    }

    CloseWindow();
}