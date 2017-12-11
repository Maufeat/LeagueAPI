#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostLolPreEndOfGameV1RegistrationBySequenceEventNameByPriority (const https::Info& _info_,
      const std::string& sequenceEventName /**/,
      const int32_t& priority /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-pre-end-of-game/v1/registration/"+to_string(sequenceEventName)+"/"+to_string(priority)+"?", { 
    }, { 
    }) };
  }
} 