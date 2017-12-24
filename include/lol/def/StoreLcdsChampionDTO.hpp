#pragma once
#include "../base_def.hpp" 
#include "StoreLcdsChampionSkinDTO.hpp"
namespace lol {
  struct StoreLcdsChampionDTO { 
    std::vector<std::string> sources;
    bool freeToPlay;
    bool owned;
    uint64_t purchaseDate;
    bool rankedPlayEnabled;
    bool active;
    int32_t championId;
    uint64_t endDate;
    uint32_t winCountRemaining;
    bool botEnabled;
    bool freeToPlayReward;
    std::vector<StoreLcdsChampionSkinDTO> championSkins; 
  };
  inline void to_json(json& j, const StoreLcdsChampionDTO& v) {
    j["sources"] = v.sources; 
    j["freeToPlay"] = v.freeToPlay; 
    j["owned"] = v.owned; 
    j["purchaseDate"] = v.purchaseDate; 
    j["rankedPlayEnabled"] = v.rankedPlayEnabled; 
    j["active"] = v.active; 
    j["championId"] = v.championId; 
    j["endDate"] = v.endDate; 
    j["winCountRemaining"] = v.winCountRemaining; 
    j["botEnabled"] = v.botEnabled; 
    j["freeToPlayReward"] = v.freeToPlayReward; 
    j["championSkins"] = v.championSkins; 
  }
  inline void from_json(const json& j, StoreLcdsChampionDTO& v) {
    v.sources = j.at("sources").get<std::vector<std::string>>(); 
    v.freeToPlay = j.at("freeToPlay").get<bool>(); 
    v.owned = j.at("owned").get<bool>(); 
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>(); 
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>(); 
    v.active = j.at("active").get<bool>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.endDate = j.at("endDate").get<uint64_t>(); 
    v.winCountRemaining = j.at("winCountRemaining").get<uint32_t>(); 
    v.botEnabled = j.at("botEnabled").get<bool>(); 
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
    v.championSkins = j.at("championSkins").get<std::vector<StoreLcdsChampionSkinDTO>>(); 
  }
}