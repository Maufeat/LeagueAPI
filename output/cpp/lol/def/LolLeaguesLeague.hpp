#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLeaguesLeagueQueueType.hpp>
#include <lol/def/LolLeaguesLeagueRank.hpp>
#include <lol/def/LolLeaguesLeagueTier.hpp>
#include <lol/def/LolLeaguesLeagueDivision.hpp>
namespace lol {
  struct LolLeaguesLeague { 
    LolLeaguesLeagueTier leagueTier;
    LolLeaguesLeagueRank requesterLeagueRank;
    uint64_t challengerNextPromotionUpdateInMs;
    std::vector<LolLeaguesLeagueDivision> leagues;
    std::string name;
    std::string leagueName;
    LolLeaguesLeagueQueueType queueType; 
  };
  void to_json(json& j, const LolLeaguesLeague& v) {
  j["leagueTier"] = v.leagueTier; 
  j["requesterLeagueRank"] = v.requesterLeagueRank; 
  j["challengerNextPromotionUpdateInMs"] = v.challengerNextPromotionUpdateInMs; 
  j["leagues"] = v.leagues; 
  j["name"] = v.name; 
  j["leagueName"] = v.leagueName; 
  j["queueType"] = v.queueType; 
  }
  void from_json(const json& j, LolLeaguesLeague& v) {
  v.leagueTier = j.at("leagueTier").get<LolLeaguesLeagueTier>(); 
  v.requesterLeagueRank = j.at("requesterLeagueRank").get<LolLeaguesLeagueRank>(); 
  v.challengerNextPromotionUpdateInMs = j.at("challengerNextPromotionUpdateInMs").get<uint64_t>(); 
  v.leagues = j.at("leagues").get<std::vector<LolLeaguesLeagueDivision>>(); 
  v.name = j.at("name").get<std::string>(); 
  v.leagueName = j.at("leagueName").get<std::string>(); 
  v.queueType = j.at("queueType").get<LolLeaguesLeagueQueueType>(); 
  }
}