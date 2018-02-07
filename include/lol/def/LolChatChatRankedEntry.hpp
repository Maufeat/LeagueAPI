#pragma once
#include "../base_def.hpp" 
#include "LolChatChatRankedTier.hpp"
#include "LolChatChatRankedQueue.hpp"
namespace lol {
  struct LolChatChatRankedEntry { 
    LolChatChatRankedQueue rankedQueue;
    LolChatChatRankedTier rankedTier;
    uint64_t division;
    std::string leagueName;
    uint64_t wins;
    uint64_t games; 
  };
  inline void to_json(json& j, const LolChatChatRankedEntry& v) {
    j["rankedQueue"] = v.rankedQueue; 
    j["rankedTier"] = v.rankedTier; 
    j["division"] = v.division; 
    j["leagueName"] = v.leagueName; 
    j["wins"] = v.wins; 
    j["games"] = v.games; 
  }
  inline void from_json(const json& j, LolChatChatRankedEntry& v) {
    v.rankedQueue = j.at("rankedQueue").get<LolChatChatRankedQueue>(); 
    v.rankedTier = j.at("rankedTier").get<LolChatChatRankedTier>(); 
    v.division = j.at("division").get<uint64_t>(); 
    v.leagueName = j.at("leagueName").get<std::string>(); 
    v.wins = j.at("wins").get<uint64_t>(); 
    v.games = j.at("games").get<uint64_t>(); 
  }
}