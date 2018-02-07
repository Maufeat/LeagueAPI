#pragma once
#include "../base_def.hpp" 
#include "StoreLcdsChampionSkinDTO.hpp"
namespace lol {
  struct StoreLcdsChampionDTO { 
    uint64_t endDate;
    uint64_t purchaseDate;
    uint32_t winCountRemaining;
    std::vector<std::string> sources;
    bool active;
    bool botEnabled;
    int32_t championId;
    std::vector<StoreLcdsChampionSkinDTO> championSkins;
    bool freeToPlay;
    bool freeToPlayReward;
    bool owned;
    bool rankedPlayEnabled; 
  };
  inline void to_json(json& j, const StoreLcdsChampionDTO& v) {
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
    j["rankedPlayEnabled"] = v.rankedPlayEnabled; 
  }
  inline void from_json(const json& j, StoreLcdsChampionDTO& v) {
    v.endDate = j.at("endDate").get<uint64_t>(); 
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>(); 
    v.winCountRemaining = j.at("winCountRemaining").get<uint32_t>(); 
    v.sources = j.at("sources").get<std::vector<std::string>>(); 
    v.active = j.at("active").get<bool>(); 
    v.botEnabled = j.at("botEnabled").get<bool>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.championSkins = j.at("championSkins").get<std::vector<StoreLcdsChampionSkinDTO>>(); 
    v.freeToPlay = j.at("freeToPlay").get<bool>(); 
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
    v.owned = j.at("owned").get<bool>(); 
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>(); 
  }
}