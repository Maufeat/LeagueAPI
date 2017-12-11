#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::string> PutLolCollectionsV1InventoriesBySummonerIdVerification (const https::Info& _info_,
      const uint64_t& summonerId /**/,
      const std::string& verificationCode /**/ )
  { 
    return { https::Do(_info_, "put", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/verification?", { 
    }, { 
    },verificationCode) };
  }
} 