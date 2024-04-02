#pragma once
#include "libultraship/src/Context.h"

#ifdef __cplusplus
#include <vector>
#include <Fast3D/gfx_pc.h>

#define SAMPLES_HIGH 544
#define SAMPLES_LOW 528
#define AUDIO_FRAMES_PER_UPDATE 2
#define NUM_AUDIO_CHANNELS 2
#define SAMPLES_PER_FRAME (SAMPLES_HIGH * NUM_AUDIO_CHANNELS * 2)

class GameEngine {
  public:
    static GameEngine* Instance;

    std::shared_ptr<LUS::Context> context;

    GameEngine();
    static void Create();
    void StartFrame() const;
    static void RunCommands(Gfx* Commands);
    void ProcessFrame(void (*run_one_game_iter)()) const;
    static void Destroy();
    static void ProcessGfxCommands(Gfx* commands);
};
#else
void GameEngine_ProcessGfxCommands(Gfx* commands);
float GameEngine_GetAspectRatio();
int GameEngine_OTRSigCheck(char* imgData);
#endif