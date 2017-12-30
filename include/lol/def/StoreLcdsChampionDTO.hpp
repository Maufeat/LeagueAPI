#pragma once
#include "../base_def.hpp" 
#include "StoreLcdsChampionSkinDTO.hpp"
namespace lol {
  struct StoreLcdsChampionDTO { 
    bool freeToPlayReward;
    bool owned;
    uint32_t winCountRemaining;
    uint64_t endDate;
    bool rankedPlayEnabled;
    bool active;
    bool freeToPlay;
    uint64_t purchaseDate;
    bool botEnabled;
    std::vector<StoreLcdsChampionSkinDTO> championSkins;
    int32_t championId;
    std::vector<std::string> sources; 
  };
  inline void to_json(json& j, const StoreLcdsChampionDTO& v) {
    j["freeToPlayReward"] = v.freeToPlayReward; 
    j["owned"] = v.owned; 
    j["winCountRemaining"] = v.winCountRemaining; 
    j["endDate"] = v.endDate; 
    j["rankedPlayEnabled"] = v.rankedPlayEnabled; 
    j["active"] = v.active; 
    j["freeToPlay"] = v.freeToPlay; 
    j["purchaseDate"] = v.purchaseDate; 
    j["botEnabled"] = v.botEnabled; 
    j["championSkins"] = v.championSkins; 
    j["championId"] = v.championId; 
    j["sources"] = v.sources; 
  }
  inline void from_json(const json& j, StoreLcdsChampionDTO& v) {
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
    v.owned = j.at("owned").get<bool>(); 
    v.winCountRemaining = j.at("winCountRemaining").get<uint32_t>(); 
    v.endDate = j.at("endDate").get<uint64_t>(); 
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>(); 
    v.active = j.at("active").get<bool>(); 
    v.freeToPlay = j.at("freeToPlay").get<bool>(); 
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>(); 
    v.botEnabled = j.at("botEnabled").get<bool>(); 
    v.championSkins = j.at("championSkins").get<std::vector<StoreLcdsChampionSkinDTO>>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.sources = j.at("sources").get<std::vector<std::string>>(); 
  }
}