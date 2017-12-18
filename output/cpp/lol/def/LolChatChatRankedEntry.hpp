#pragma once
#include "../base_def.hpp" 
#include "LolChatChatRankedTier.hpp"
#include "LolChatChatRankedQueue.hpp"
namespace lol {
  struct LolChatChatRankedEntry { 
    LolChatChatRankedTier rankedTier;
    uint64_t wins;
    LolChatChatRankedQueue rankedQueue;
    std::string leagueName;
    uint64_t division;
    uint64_t games; 
  };
  inline void to_json(json& j, const LolChatChatRankedEntry& v) {
    j["rankedTier"] = v.rankedTier; 
    j["wins"] = v.wins; 
    j["rankedQueue"] = v.rankedQueue; 
    j["leagueName"] = v.leagueName; 
    j["division"] = v.division; 
    j["games"] = v.games; 
  }
  inline void from_json(const json& j, LolChatChatRankedEntry& v) {
    v.rankedTier = j.at("rankedTier").get<LolChatChatRankedTier>(); 
    v.wins = j.at("wins").get<uint64_t>(); 
    v.rankedQueue = j.at("rankedQueue").get<LolChatChatRankedQueue>(); 
    v.leagueName = j.at("leagueName").get<std::string>(); 
    v.division = j.at("division").get<uint64_t>(); 
    v.games = j.at("games").get<uint64_t>(); 
  }
}