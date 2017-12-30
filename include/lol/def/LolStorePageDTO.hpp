#pragma once
#include "../base_def.hpp" 
#include "LolStoreCatalogItem.hpp"
#include "LolStorePlayer.hpp"
#include "LolStorePageGroupingDTO.hpp"
namespace lol {
  struct LolStorePageDTO { 
    std::map<std::string, LolStorePageGroupingDTO> itemGroups;
    std::vector<LolStoreCatalogItem> catalog;
    LolStorePlayer Player;
    std::vector<std::string> groupOrder; 
  };
  inline void to_json(json& j, const LolStorePageDTO& v) {
    j["itemGroups"] = v.itemGroups; 
    j["catalog"] = v.catalog; 
    j["Player"] = v.Player; 
    j["groupOrder"] = v.groupOrder; 
  }
  inline void from_json(const json& j, LolStorePageDTO& v) {
    v.itemGroups = j.at("itemGroups").get<std::map<std::string, LolStorePageGroupingDTO>>(); 
    v.catalog = j.at("catalog").get<std::vector<LolStoreCatalogItem>>(); 
    v.Player = j.at("Player").get<LolStorePlayer>(); 
    v.groupOrder = j.at("groupOrder").get<std::vector<std::string>>(); 
  }
}