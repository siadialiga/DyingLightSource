# My Notes

## Dying Light File Analysis (C++ / C#)

**1. Critical Files**
- **DyingLightGame.exe**: Turns out this is basically just a bootstrap launcher. It doesn't do much heavy lifting on its own; it just grabs the command line arguments and passes them over to `engine_x64_rwdi.dll` to kick off the game.
- **engine_x64_rwdi.dll**: The absolute heart of the game. It controls the main game loop, handles memory management, sets up input mapping, and spins up the renderer. It's also responsible for loading the game logic DLL.
- **gamedll_x64_rwdi.dll**: This is where all the gameplay fun happens. It holds the logic for player mechanics, zombie AI, items, weapons, and quests. If we want to change how the game behaves or alter entity attributes, this is the main target.
- **filesystem_x64_rwdi.dll**: Implements the virtual file system. It decides how the game mounts `.pak` files, maps directories, and reads `.scr` scripts. Super important for understanding mod loading and figuring out how to bypass file integrity checks.
- **rd3d11_x64_rwdi.dll**: The DirectX 11 renderer backend. It translates the engine's generic draw calls into DirectX 11 instructions. Probably don't need to mess with this unless we want to hook the graphics pipeline or do some visual tweaks.

**2. Third-Party Libraries**
- bink2w64.dll (Video decoder for cutscenes and logos)
- fmod*.dll (Audio middleware doing sound calculations)
- SDL2.dll (Handles gamepad/keyboard inputs and window operations)
- steam_api64.dll & EOSSDK-Win64-Shipping.dll (Integrations for Steam & Epic Services)
- GFSDK_*.dll (Nvidia Gameworks physics/graphics libraries for SSAO, DOF, etc.)
- libcurl64.dll (Networking library for handling connections)
- Tobii.EyeX.Client.dll (API for Tobii eye-tracking hardware, likely has C# wrapper but useless to us)
- jsoncpp_*, ogg_*, vorbis_*, xaudio2_* (Standard open-source libraries for utility and audio)

## Progress

1. engine_x64_rwdi.dll (Completed)
2. gamedll_x64_rwdi.dll (Completed)
3. filesystem_x64_rwdi.dll (Completed)
4. rd3d11_x64_rwdi.dll (Completed)
5. DyingLightGame.exe (Completed)