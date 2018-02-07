#pragma once
#include "../base_def.hpp" 
#include "LolLeaguesLeagueDivision.hpp"
#include "LolLeaguesLeagueRank.hpp"
#include "LolLeaguesLeagueQueueType.hpp"
#include "LolLeaguesLeagueTier.hpp"
namespace lol {
  struct LolLeaguesLeague { 
    LolLeaguesLeagueQueueType queueType;
    LolLeaguesLeagueTier leagueTier;
    LolLeaguesLeagueRank requesterLeagueRank;
    std::string leagueName;
    std::string name;
    std::vector<LolLeaguesLeagueDivision> leagues;
    uint64_t challengerNextPromotionUpdateInMs; 
  };
  inline void to_json(json& j, const LolLeaguesLeague& v) {
    j["queueType"] = v.queueType; 
    j["leagueTier"] = v.leagueTier; 
    j["requesterLeagueRank"] = v.requesterLeagueRank; 
    j["leagueName"] = v.leagueName; 
    j["name"] = v.name; 
    j["leagues"] = v.leagues; 
    j["challengerNextPromotionUpdateInMs"] = v.challengerNextPromotionUpdateInMs; 
  }
  inline void from_json(const json& j, LolLeaguesLeague& v) {
    v.queueType = j.at("queueType").get<LolLeaguesLeagueQueueType>(); 
    v.leagueTier = j.at("leagueTier").get<LolLeaguesLeagueTier>(); 
    v.requesterLeagueRank = j.at("requesterLeagueRank").get<LolLeaguesLeagueRank>(); 
    v.leagueName = j.at("leagueName").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.leagues = j.at("leagues").get<std::vector<LolLeaguesLeagueDivision>>(); 
    v.challengerNextPromotionUpdateInMs = j.at("challengerNextPromotionUpdateInMs").get<uint64_t>(); 
  }
}