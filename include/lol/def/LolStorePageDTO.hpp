#pragma once
#include "../base_def.hpp" 
#include "LolStorePlayer.hpp"
#include "LolStorePageGroupingDTO.hpp"
#include "LolStoreCatalogItem.hpp"
namespace lol {
  struct LolStorePageDTO { 
    LolStorePlayer Player;
    std::vector<LolStoreCatalogItem> catalog;
    std::vector<std::string> groupOrder;
    std::map<std::string, LolStorePageGroupingDTO> itemGroups; 
  };
  inline void to_json(json& j, const LolStorePageDTO& v) {
    j["Player"] = v.Player; 
    j["catalog"] = v.catalog; 
    j["groupOrder"] = v.groupOrder; 
    j["itemGroups"] = v.itemGroups; 
  }
  inline void from_json(const json& j, LolStorePageDTO& v) {
    v.Player = j.at("Player").get<LolStorePlayer>(); 
    v.catalog = j.at("catalog").get<std::vector<LolStoreCatalogItem>>(); 
    v.groupOrder = j.at("groupOrder").get<std::vector<std::string>>(); 
    v.itemGroups = j.at("itemGroups").get<std::map<std::string, LolStorePageGroupingDTO>>(); 
  }
}