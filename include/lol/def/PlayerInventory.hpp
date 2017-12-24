#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PlayerInventory { 
    std::vector<int32_t> champions;
    std::vector<int64_t> wardSkins;
    std::vector<int32_t> icons;
    std::vector<int32_t> skins; 
  };
  inline void to_json(json& j, const PlayerInventory& v) {
    j["champions"] = v.champions; 
    j["wardSkins"] = v.wardSkins; 
    j["icons"] = v.icons; 
    j["skins"] = v.skins; 
  }
  inline void from_json(const json& j, PlayerInventory& v) {
    v.champions = j.at("champions").get<std::vector<int32_t>>(); 
    v.wardSkins = j.at("wardSkins").get<std::vector<int64_t>>(); 
    v.icons = j.at("icons").get<std::vector<int32_t>>(); 
    v.skins = j.at("skins").get<std::vector<int32_t>>(); 
  }
}