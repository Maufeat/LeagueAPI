#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolChampSelectLegacyCollectionsRental { /**/ 
    bool rented;/**/
  };
  static void to_json(json& j, const LolChampSelectLegacyCollectionsRental& v) { 
    j["rented"] = v.rented;
  }
  static void from_json(const json& j, LolChampSelectLegacyCollectionsRental& v) { 
    v.rented = j.at("rented").get<bool>(); 
  }
} 