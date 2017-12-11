#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolStoreCatalogItem.hpp>"
#include "<leagueapi/definitions/LolStorePageGroupingDTO.hpp>"
#include "<leagueapi/definitions/LolStorePlayer.hpp>"

namespace leagueapi {
  struct LolStorePageDTO { /**/ 
    std::map<std::string, LolStorePageGroupingDTO> itemGroups;/**/
    std::vector<LolStoreCatalogItem> catalog;/**/
    LolStorePlayer Player;/**/
    std::vector<std::string> groupOrder;/**/
  };
  static void to_json(json& j, const LolStorePageDTO& v) { 
    j["itemGroups"] = v.itemGroups;
    j["catalog"] = v.catalog;
    j["Player"] = v.Player;
    j["groupOrder"] = v.groupOrder;
  }
  static void from_json(const json& j, LolStorePageDTO& v) { 
    v.itemGroups = j.at("itemGroups").get<std::map<std::string, LolStorePageGroupingDTO>>(); 
    v.catalog = j.at("catalog").get<std::vector<LolStoreCatalogItem>>(); 
    v.Player = j.at("Player").get<LolStorePlayer>(); 
    v.groupOrder = j.at("groupOrder").get<std::vector<std::string>>(); 
  }
} 