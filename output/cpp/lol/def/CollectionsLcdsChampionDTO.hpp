#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/CollectionsLcdsChampionSkinDTO.hpp>
namespace lol {
  struct CollectionsLcdsChampionDTO { 
    std::vector<CollectionsLcdsChampionSkinDTO> championSkins;
    uint64_t purchased;
    uint64_t endDate;
    uint64_t purchaseDate;
    bool freeToPlay;
    bool owned;
    std::vector<std::string> sources;
    bool botEnabled;
    bool active;
    int32_t championId;
    bool rankedPlayEnabled;
    int32_t winCountRemaining;
    bool freeToPlayReward; 
  };
  void to_json(json& j, const CollectionsLcdsChampionDTO& v) {
  j["championSkins"] = v.championSkins; 
  j["purchased"] = v.purchased; 
  j["endDate"] = v.endDate; 
  j["purchaseDate"] = v.purchaseDate; 
  j["freeToPlay"] = v.freeToPlay; 
  j["owned"] = v.owned; 
  j["sources"] = v.sources; 
  j["botEnabled"] = v.botEnabled; 
  j["active"] = v.active; 
  j["championId"] = v.championId; 
  j["rankedPlayEnabled"] = v.rankedPlayEnabled; 
  j["winCountRemaining"] = v.winCountRemaining; 
  j["freeToPlayReward"] = v.freeToPlayReward; 
  }
  void from_json(const json& j, CollectionsLcdsChampionDTO& v) {
  v.championSkins = j.at("championSkins").get<std::vector<CollectionsLcdsChampionSkinDTO>>(); 
  v.purchased = j.at("purchased").get<uint64_t>(); 
  v.endDate = j.at("endDate").get<uint64_t>(); 
  v.purchaseDate = j.at("purchaseDate").get<uint64_t>(); 
  v.freeToPlay = j.at("freeToPlay").get<bool>(); 
  v.owned = j.at("owned").get<bool>(); 
  v.sources = j.at("sources").get<std::vector<std::string>>(); 
  v.botEnabled = j.at("botEnabled").get<bool>(); 
  v.active = j.at("active").get<bool>(); 
  v.championId = j.at("championId").get<int32_t>(); 
  v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>(); 
  v.winCountRemaining = j.at("winCountRemaining").get<int32_t>(); 
  v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
  }
}