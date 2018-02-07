#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolSummonerInternalSummoner { 
    uint64_t summonerId;
    uint64_t accountId;
    std::string displayName;
    std::string internalName;
    std::string lastSeasonHighestRank;
    int32_t profileIconId;
    bool tutorialFlag;
    bool helpFlag;
    bool advancedTutorialFlag;
    bool displayEloQuestionaireFlag;
    bool nameChangeFlag; 
  };
  inline void to_json(json& j, const LolSummonerInternalSummoner& v) {
    j["summonerId"] = v.summonerId; 
    j["accountId"] = v.accountId; 
    j["displayName"] = v.displayName; 
    j["internalName"] = v.internalName; 
    j["lastSeasonHighestRank"] = v.lastSeasonHighestRank; 
    j["profileIconId"] = v.profileIconId; 
    j["tutorialFlag"] = v.tutorialFlag; 
    j["helpFlag"] = v.helpFlag; 
    j["advancedTutorialFlag"] = v.advancedTutorialFlag; 
    j["displayEloQuestionaireFlag"] = v.displayEloQuestionaireFlag; 
    j["nameChangeFlag"] = v.nameChangeFlag; 
  }
  inline void from_json(const json& j, LolSummonerInternalSummoner& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.displayName = j.at("displayName").get<std::string>(); 
    v.internalName = j.at("internalName").get<std::string>(); 
    v.lastSeasonHighestRank = j.at("lastSeasonHighestRank").get<std::string>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.tutorialFlag = j.at("tutorialFlag").get<bool>(); 
    v.helpFlag = j.at("helpFlag").get<bool>(); 
    v.advancedTutorialFlag = j.at("advancedTutorialFlag").get<bool>(); 
    v.displayEloQuestionaireFlag = j.at("displayEloQuestionaireFlag").get<bool>(); 
    v.nameChangeFlag = j.at("nameChangeFlag").get<bool>(); 
  }
}