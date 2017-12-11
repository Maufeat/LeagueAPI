#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolPreEndOfGameSequenceEvent.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolPreEndOfGameSequenceEvent> GetLolPreEndOfGameV1CurrentSequenceEvent (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-pre-end-of-game/v1/currentSequenceEvent?", { 
    }, { 
    },"") };
  }
} 