#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolMissionsCollectionsRental { /**/ 
    bool rented;/**/
  };
  static void to_json(json& j, const LolMissionsCollectionsRental& v) { 
    j["rented"] = v.rented;
  }
  static void from_json(const json& j, LolMissionsCollectionsRental& v) { 
    v.rented = j.at("rented").get<bool>(); 
  }
} 