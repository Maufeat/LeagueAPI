#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct PlayerInventory { /**/ 
    std::vector<int32_t> champions;/**/
    std::vector<int32_t> skins;/**/
    std::vector<int32_t> icons;/**/
    std::vector<int64_t> wardSkins;/**/
  };
  static void to_json(json& j, const PlayerInventory& v) { 
    j["champions"] = v.champions;
    j["skins"] = v.skins;
    j["icons"] = v.icons;
    j["wardSkins"] = v.wardSkins;
  }
  static void from_json(const json& j, PlayerInventory& v) { 
    v.champions = j.at("champions").get<std::vector<int32_t>>(); 
    v.skins = j.at("skins").get<std::vector<int32_t>>(); 
    v.icons = j.at("icons").get<std::vector<int32_t>>(); 
    v.wardSkins = j.at("wardSkins").get<std::vector<int64_t>>(); 
  }
} 