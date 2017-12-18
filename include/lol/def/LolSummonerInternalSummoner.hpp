#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolSummonerInternalSummoner { 
    bool helpFlag;
    std::string displayName;
    bool nameChangeFlag;
    std::string internalName;
    bool advancedTutorialFlag;
    bool displayEloQuestionaireFlag;
    bool tutorialFlag;
    uint64_t summonerId;
    std::string lastSeasonHighestRank;
    int32_t profileIconId;
    uint64_t accountId; 
  };
  inline void to_json(json& j, const LolSummonerInternalSummoner& v) {
    j["helpFlag"] = v.helpFlag; 
    j["displayName"] = v.displayName; 
    j["nameChangeFlag"] = v.nameChangeFlag; 
    j["internalName"] = v.internalName; 
    j["advancedTutorialFlag"] = v.advancedTutorialFlag; 
    j["displayEloQuestionaireFlag"] = v.displayEloQuestionaireFlag; 
    j["tutorialFlag"] = v.tutorialFlag; 
    j["summonerId"] = v.summonerId; 
    j["lastSeasonHighestRank"] = v.lastSeasonHighestRank; 
    j["profileIconId"] = v.profileIconId; 
    j["accountId"] = v.accountId; 
  }
  inline void from_json(const json& j, LolSummonerInternalSummoner& v) {
    v.helpFlag = j.at("helpFlag").get<bool>(); 
    v.displayName = j.at("displayName").get<std::string>(); 
    v.nameChangeFlag = j.at("nameChangeFlag").get<bool>(); 
    v.internalName = j.at("internalName").get<std::string>(); 
    v.advancedTutorialFlag = j.at("advancedTutorialFlag").get<bool>(); 
    v.displayEloQuestionaireFlag = j.at("displayEloQuestionaireFlag").get<bool>(); 
    v.tutorialFlag = j.at("tutorialFlag").get<bool>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.lastSeasonHighestRank = j.at("lastSeasonHighestRank").get<std::string>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}