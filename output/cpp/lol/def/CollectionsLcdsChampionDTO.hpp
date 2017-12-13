#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/CollectionsLcdsChampionSkinDTO.hpp>
namespace lol {
  struct CollectionsLcdsChampionDTO { 
    bool rankedPlayEnabled;
    bool freeToPlay;
    uint64_t endDate;
    std::vector<std::string> sources;
    int32_t championId;
    int32_t winCountRemaining;
    uint64_t purchased;
    std::vector<CollectionsLcdsChampionSkinDTO> championSkins;
    bool botEnabled;
    uint64_t purchaseDate;
    bool freeToPlayReward;
    bool active;
    bool owned; 
  };
  void to_json(json& j, const CollectionsLcdsChampionDTO& v) {
  j["rankedPlayEnabled"] = v.rankedPlayEnabled; 
  j["freeToPlay"] = v.freeToPlay; 
  j["endDate"] = v.endDate; 
  j["sources"] = v.sources; 
  j["championId"] = v.championId; 
  j["winCountRemaining"] = v.winCountRemaining; 
  j["purchased"] = v.purchased; 
  j["championSkins"] = v.championSkins; 
  j["botEnabled"] = v.botEnabled; 
  j["purchaseDate"] = v.purchaseDate; 
  j["freeToPlayReward"] = v.freeToPlayReward; 
  j["active"] = v.active; 
  j["owned"] = v.owned; 
  }
  void from_json(const json& j, CollectionsLcdsChampionDTO& v) {
  v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>(); 
  v.freeToPlay = j.at("freeToPlay").get<bool>(); 
  v.endDate = j.at("endDate").get<uint64_t>(); 
  v.sources = j.at("sources").get<std::vector<std::string>>(); 
  v.championId = j.at("championId").get<int32_t>(); 
  v.winCountRemaining = j.at("winCountRemaining").get<int32_t>(); 
  v.purchased = j.at("purchased").get<uint64_t>(); 
  v.championSkins = j.at("championSkins").get<std::vector<CollectionsLcdsChampionSkinDTO>>(); 
  v.botEnabled = j.at("botEnabled").get<bool>(); 
  v.purchaseDate = j.at("purchaseDate").get<uint64_t>(); 
  v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
  v.active = j.at("active").get<bool>(); 
  v.owned = j.at("owned").get<bool>(); 
  }
}