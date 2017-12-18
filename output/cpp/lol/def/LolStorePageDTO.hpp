#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolStoreCatalogItem.hpp>
#include <lol/def/LolStorePlayer.hpp>
#include <lol/def/LolStorePageGroupingDTO.hpp>
namespace lol {
  struct LolStorePageDTO { 
    std::vector<LolStoreCatalogItem> catalog;
    LolStorePlayer Player;
    std::vector<std::string> groupOrder;
    std::map<std::string, LolStorePageGroupingDTO> itemGroups; 
  };
  inline void to_json(json& j, const LolStorePageDTO& v) {
    j["catalog"] = v.catalog; 
    j["Player"] = v.Player; 
    j["groupOrder"] = v.groupOrder; 
    j["itemGroups"] = v.itemGroups; 
  }
  inline void from_json(const json& j, LolStorePageDTO& v) {
    v.catalog = j.at("catalog").get<std::vector<LolStoreCatalogItem>>(); 
    v.Player = j.at("Player").get<LolStorePlayer>(); 
    v.groupOrder = j.at("groupOrder").get<std::vector<std::string>>(); 
    v.itemGroups = j.at("itemGroups").get<std::map<std::string, LolStorePageGroupingDTO>>(); 
  }
}