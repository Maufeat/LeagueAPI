#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLootCollectionsRental { /**/ 
    bool rented;/**/
  };
  static void to_json(json& j, const LolLootCollectionsRental& v) { 
    j["rented"] = v.rented;
  }
  static void from_json(const json& j, LolLootCollectionsRental& v) { 
    v.rented = j.at("rented").get<bool>(); 
  }
} 