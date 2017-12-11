#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolPerksServiceSettings { /**/ 
    bool serverSideStorageAvailable;/**/
  };
  static void to_json(json& j, const LolPerksServiceSettings& v) { 
    j["serverSideStorageAvailable"] = v.serverSideStorageAvailable;
  }
  static void from_json(const json& j, LolPerksServiceSettings& v) { 
    v.serverSideStorageAvailable = j.at("serverSideStorageAvailable").get<bool>(); 
  }
} 