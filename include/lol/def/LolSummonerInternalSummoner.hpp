#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolSummonerInternalSummoner { 
    uint64_t summonerId;
    bool helpFlag;
    bool tutorialFlag;
    bool nameChangeFlag;
    bool displayEloQuestionaireFlag;
    uint64_t accountId;
    bool advancedTutorialFlag;
    std::string lastSeasonHighestRank;
    int32_t profileIconId;
    std::string displayName;
    std::string internalName; 
  };
  inline void to_json(json& j, const LolSummonerInternalSummoner& v) {
    j["summonerId"] = v.summonerId; 
    j["helpFlag"] = v.helpFlag; 
    j["tutorialFlag"] = v.tutorialFlag; 
    j["nameChangeFlag"] = v.nameChangeFlag; 
    j["displayEloQuestionaireFlag"] = v.displayEloQuestionaireFlag; 
    j["accountId"] = v.accountId; 
    j["advancedTutorialFlag"] = v.advancedTutorialFlag; 
    j["lastSeasonHighestRank"] = v.lastSeasonHighestRank; 
    j["profileIconId"] = v.profileIconId; 
    j["displayName"] = v.displayName; 
    j["internalName"] = v.internalName; 
  }
  inline void from_json(const json& j, LolSummonerInternalSummoner& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.helpFlag = j.at("helpFlag").get<bool>(); 
    v.tutorialFlag = j.at("tutorialFlag").get<bool>(); 
    v.nameChangeFlag = j.at("nameChangeFlag").get<bool>(); 
    v.displayEloQuestionaireFlag = j.at("displayEloQuestionaireFlag").get<bool>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.advancedTutorialFlag = j.at("advancedTutorialFlag").get<bool>(); 
    v.lastSeasonHighestRank = j.at("lastSeasonHighestRank").get<std::string>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.displayName = j.at("displayName").get<std::string>(); 
    v.internalName = j.at("internalName").get<std::string>(); 
  }
}