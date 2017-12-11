#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostLolPreEndOfGameV1CompleteBySequenceEventName (const https::Info& _info_,
      const std::string& sequenceEventName /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-pre-end-of-game/v1/complete/"+to_string(sequenceEventName)+"?", { 
    }, { 
    }) };
  }
} 