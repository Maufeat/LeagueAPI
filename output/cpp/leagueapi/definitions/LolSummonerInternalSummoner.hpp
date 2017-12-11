#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolSummonerInternalSummoner { /**/ 
    std::string lastSeasonHighestRank;/**/
    bool displayEloQuestionaireFlag;/**/
    uint64_t summonerId;/**/
    bool advancedTutorialFlag;/**/
    uint64_t accountId;/**/
    bool tutorialFlag;/**/
    bool nameChangeFlag;/**/
    int32_t profileIconId;/**/
    bool helpFlag;/**/
    std::string internalName;/**/
    std::string displayName;/**/
  };
  static void to_json(json& j, const LolSummonerInternalSummoner& v) { 
    j["lastSeasonHighestRank"] = v.lastSeasonHighestRank;
    j["displayEloQuestionaireFlag"] = v.displayEloQuestionaireFlag;
    j["summonerId"] = v.summonerId;
    j["advancedTutorialFlag"] = v.advancedTutorialFlag;
    j["accountId"] = v.accountId;
    j["tutorialFlag"] = v.tutorialFlag;
    j["nameChangeFlag"] = v.nameChangeFlag;
    j["profileIconId"] = v.profileIconId;
    j["helpFlag"] = v.helpFlag;
    j["internalName"] = v.internalName;
    j["displayName"] = v.displayName;
  }
  static void from_json(const json& j, LolSummonerInternalSummoner& v) { 
    v.lastSeasonHighestRank = j.at("lastSeasonHighestRank").get<std::string>(); 
    v.displayEloQuestionaireFlag = j.at("displayEloQuestionaireFlag").get<bool>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.advancedTutorialFlag = j.at("advancedTutorialFlag").get<bool>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.tutorialFlag = j.at("tutorialFlag").get<bool>(); 
    v.nameChangeFlag = j.at("nameChangeFlag").get<bool>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.helpFlag = j.at("helpFlag").get<bool>(); 
    v.internalName = j.at("internalName").get<std::string>(); 
    v.displayName = j.at("displayName").get<std::string>(); 
  }
} 