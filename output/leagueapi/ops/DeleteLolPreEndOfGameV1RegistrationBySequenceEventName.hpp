#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> DeleteLolPreEndOfGameV1RegistrationBySequenceEventName (const https::Info& _info_,
      const std::string& sequenceEventName /**/ )
  { 
    return { https::Do(_info_, "delete", "/lol-pre-end-of-game/v1/registration/"+to_string(sequenceEventName)+"?", { 
    }, { 
    },"") };
  }
} 