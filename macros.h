#pragma once
#define INGAME(CODE) \
    if (gameWrapper->IsInGame() || gameWrapper->IsInOnlineGame()) { \
		CODE \
    } else { \
        LOG("Function can only be called ingame."); \
    } \

#define OFFLINE(CODE) \
    if (gameWrapper->IsInGame() || gameWrapper->IsInOnlineGame()) { \
		if (!(gameWrapper->IsInOnlineGame())) { \
            CODE \
        } else { \
            LOG("Function cannot be called in online games."); \
        } \
    } else { \
        LOG("Function can only be called ingame."); \
    } \

#define ONLINE(CODE) \
    if (gameWrapper->IsInOnlineGame()) { \
		CODE \
    } else { \
        LOG("Function can only be called in online games."); \
    } \

#define FREEPLAY(CODE) \
    if (gameWrapper->IsInFreeplay()) { \
		CODE \
    } else { \
        LOG("Function can only be called in Freeplay."); \
    } \

#define REPLAY(CODE) \
    if (gameWrapper->IsInReplay()) { \
		CODE \
    } else { \
        LOG("Function can only be called in Replay."); \
    } \