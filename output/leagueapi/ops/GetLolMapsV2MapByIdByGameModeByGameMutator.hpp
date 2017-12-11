#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolMapsMaps.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolMapsMaps> GetLolMapsV2MapByIdByGameModeByGameMutator (const https::Info& _info_,
      const int64_t& id /**/,
      const std::string& gameMode /**/,
      const std::string& gameMutator /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-maps/v2/map/"+to_string(id)+"/"+to_string(gameMode)+"/"+to_string(gameMutator)+"?", { 
    }, { 
    },"") };
  }
} 