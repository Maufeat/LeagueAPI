#pragma once
#include "../base_def.hpp" 
#include "LolLeaguesLeagueDivision.hpp"
#include "LolLeaguesLeagueRank.hpp"
#include "LolLeaguesLeagueTier.hpp"
#include "LolLeaguesLeagueQueueType.hpp"
namespace lol {
  struct LolLeaguesLeague { 
    std::string name;
    uint64_t challengerNextPromotionUpdateInMs;
    std::string leagueName;
    LolLeaguesLeagueQueueType queueType;
    LolLeaguesLeagueTier leagueTier;
    LolLeaguesLeagueRank requesterLeagueRank;
    std::vector<LolLeaguesLeagueDivision> leagues; 
  };
  inline void to_json(json& j, const LolLeaguesLeague& v) {
    j["name"] = v.name; 
    j["challengerNextPromotionUpdateInMs"] = v.challengerNextPromotionUpdateInMs; 
    j["leagueName"] = v.leagueName; 
    j["queueType"] = v.queueType; 
    j["leagueTier"] = v.leagueTier; 
    j["requesterLeagueRank"] = v.requesterLeagueRank; 
    j["leagues"] = v.leagues; 
  }
  inline void from_json(const json& j, LolLeaguesLeague& v) {
    v.name = j.at("name").get<std::string>(); 
    v.challengerNextPromotionUpdateInMs = j.at("challengerNextPromotionUpdateInMs").get<uint64_t>(); 
    v.leagueName = j.at("leagueName").get<std::string>(); 
    v.queueType = j.at("queueType").get<LolLeaguesLeagueQueueType>(); 
    v.leagueTier = j.at("leagueTier").get<LolLeaguesLeagueTier>(); 
    v.requesterLeagueRank = j.at("requesterLeagueRank").get<LolLeaguesLeagueRank>(); 
    v.leagues = j.at("leagues").get<std::vector<LolLeaguesLeagueDivision>>(); 
  }
}