#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolQueueEligibilityCollectionsRental { /**/ 
    bool rented;/**/
  };
  static void to_json(json& j, const LolQueueEligibilityCollectionsRental& v) { 
    j["rented"] = v.rented;
  }
  static void from_json(const json& j, LolQueueEligibilityCollectionsRental& v) { 
    v.rented = j.at("rented").get<bool>(); 
  }
} 