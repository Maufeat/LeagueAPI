#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<bool> GetLolSettingsV2DidresetByPpType (const https::Info& _info_,
      const std::string& ppType /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-settings/v2/didreset/"+to_string(ppType)+"?", { 
    }, { 
    }) };
  }
} 