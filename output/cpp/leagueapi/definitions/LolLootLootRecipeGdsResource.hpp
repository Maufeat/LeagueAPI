#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLootLootRecipeGdsResource { /**/ 
    std::string placeholder;/**/
  };
  static void to_json(json& j, const LolLootLootRecipeGdsResource& v) { 
    j["placeholder"] = v.placeholder;
  }
  static void from_json(const json& j, LolLootLootRecipeGdsResource& v) { 
    v.placeholder = j.at("placeholder").get<std::string>(); 
  }
} 