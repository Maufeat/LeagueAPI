#pragma once
#include "../base_def.hpp" 
#include "LolLeaguesLeagueRank.hpp"
#include "LolLeaguesLeagueDivision.hpp"
#include "LolLeaguesLeagueTier.hpp"
#include "LolLeaguesLeagueQueueType.hpp"
namespace lol {
  struct LolLeaguesLeague { 
    uint64_t challengerNextPromotionUpdateInMs;
    LolLeaguesLeagueRank requesterLeagueRank;
    std::string name;
    std::vector<LolLeaguesLeagueDivision> leagues;
    LolLeaguesLeagueTier leagueTier;
    LolLeaguesLeagueQueueType queueType;
    std::string leagueName; 
  };
  inline void to_json(json& j, const LolLeaguesLeague& v) {
    j["challengerNextPromotionUpdateInMs"] = v.challengerNextPromotionUpdateInMs; 
    j["requesterLeagueRank"] = v.requesterLeagueRank; 
    j["name"] = v.name; 
    j["leagues"] = v.leagues; 
    j["leagueTier"] = v.leagueTier; 
    j["queueType"] = v.queueType; 
    j["leagueName"] = v.leagueName; 
  }
  inline void from_json(const json& j, LolLeaguesLeague& v) {
    v.challengerNextPromotionUpdateInMs = j.at("challengerNextPromotionUpdateInMs").get<uint64_t>(); 
    v.requesterLeagueRank = j.at("requesterLeagueRank").get<LolLeaguesLeagueRank>(); 
    v.name = j.at("name").get<std::string>(); 
    v.leagues = j.at("leagues").get<std::vector<LolLeaguesLeagueDivision>>(); 
    v.leagueTier = j.at("leagueTier").get<LolLeaguesLeagueTier>(); 
    v.queueType = j.at("queueType").get<LolLeaguesLeagueQueueType>(); 
    v.leagueName = j.at("leagueName").get<std::string>(); 
  }
}