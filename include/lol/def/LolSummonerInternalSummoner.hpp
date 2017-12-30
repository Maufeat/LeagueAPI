#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolSummonerInternalSummoner { 
    std::string displayName;
    std::string lastSeasonHighestRank;
    bool displayEloQuestionaireFlag;
    bool nameChangeFlag;
    bool helpFlag;
    uint64_t accountId;
    int32_t profileIconId;
    bool tutorialFlag;
    bool advancedTutorialFlag;
    uint64_t summonerId;
    std::string internalName; 
  };
  inline void to_json(json& j, const LolSummonerInternalSummoner& v) {
    j["displayName"] = v.displayName; 
    j["lastSeasonHighestRank"] = v.lastSeasonHighestRank; 
    j["displayEloQuestionaireFlag"] = v.displayEloQuestionaireFlag; 
    j["nameChangeFlag"] = v.nameChangeFlag; 
    j["helpFlag"] = v.helpFlag; 
    j["accountId"] = v.accountId; 
    j["profileIconId"] = v.profileIconId; 
    j["tutorialFlag"] = v.tutorialFlag; 
    j["advancedTutorialFlag"] = v.advancedTutorialFlag; 
    j["summonerId"] = v.summonerId; 
    j["internalName"] = v.internalName; 
  }
  inline void from_json(const json& j, LolSummonerInternalSummoner& v) {
    v.displayName = j.at("displayName").get<std::string>(); 
    v.lastSeasonHighestRank = j.at("lastSeasonHighestRank").get<std::string>(); 
    v.displayEloQuestionaireFlag = j.at("displayEloQuestionaireFlag").get<bool>(); 
    v.nameChangeFlag = j.at("nameChangeFlag").get<bool>(); 
    v.helpFlag = j.at("helpFlag").get<bool>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.tutorialFlag = j.at("tutorialFlag").get<bool>(); 
    v.advancedTutorialFlag = j.at("advancedTutorialFlag").get<bool>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.internalName = j.at("internalName").get<std::string>(); 
  }
}