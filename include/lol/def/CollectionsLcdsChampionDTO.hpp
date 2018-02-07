#pragma once
#include "../base_def.hpp" 
#include "CollectionsLcdsChampionSkinDTO.hpp"
namespace lol {
  struct CollectionsLcdsChampionDTO { 
    uint64_t endDate;
    uint64_t purchaseDate;
    int32_t winCountRemaining;
    std::vector<std::string> sources;
    bool active;
    bool botEnabled;
    int32_t championId;
    std::vector<CollectionsLcdsChampionSkinDTO> championSkins;
    bool freeToPlay;
    bool freeToPlayReward;
    bool owned;
    uint64_t purchased;
    bool rankedPlayEnabled; 
  };
  inline void to_json(json& j, const CollectionsLcdsChampionDTO& v) {
    j["endDate"] = v.endDate; 
    j["purchaseDate"] = v.purchaseDate; 
    j["winCountRemaining"] = v.winCountRemaining; 
    j["sources"] = v.sources; 
    j["active"] = v.active; 
    j["botEnabled"] = v.botEnabled; 
    j["championId"] = v.championId; 
    j["championSkins"] = v.championSkins; 
    j["freeToPlay"] = v.freeToPlay; 
    j["freeToPlayReward"] = v.freeToPlayReward; 
    j["owned"] = v.owned; 
    j["purchased"] = v.purchased; 
    j["rankedPlayEnabled"] = v.rankedPlayEnabled; 
  }
  inline void from_json(const json& j, CollectionsLcdsChampionDTO& v) {
    v.endDate = j.at("endDate").get<uint64_t>(); 
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>(); 
    v.winCountRemaining = j.at("winCountRemaining").get<int32_t>(); 
    v.sources = j.at("sources").get<std::vector<std::string>>(); 
    v.active = j.at("active").get<bool>(); 
    v.botEnabled = j.at("botEnabled").get<bool>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.championSkins = j.at("championSkins").get<std::vector<CollectionsLcdsChampionSkinDTO>>(); 
    v.freeToPlay = j.at("freeToPlay").get<bool>(); 
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
    v.owned = j.at("owned").get<bool>(); 
    v.purchased = j.at("purchased").get<uint64_t>(); 
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>(); 
  }
}