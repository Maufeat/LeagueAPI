#pragma once
#include "../base_def.hpp" 
#include "LolEndOfGameChampionMasteryMini.hpp"
#include "LolEndOfGameChampionMasteryGrade.hpp"
namespace lol {
  struct LolEndOfGameChampionMasteryUpdate { 
    std::string id;
    uint64_t gameId;
    uint64_t playerId;
    int32_t championId;
    bool hasLeveledUp;
    int64_t level;
    int64_t pointsBeforeGame;
    int64_t pointsGained;
    int64_t pointsGainedIndividualContribution;
    int64_t bonusPointsGained;
    int64_t pointsSinceLastLevelBeforeGame;
    int64_t pointsUntilNextLevelBeforeGame;
    int64_t pointsUntilNextLevelAfterGame;
    std::string grade;
    int64_t score;
    std::vector<LolEndOfGameChampionMasteryMini> levelUpList;
    std::vector<LolEndOfGameChampionMasteryGrade> memberGrades; 
  };
  inline void to_json(json& j, const LolEndOfGameChampionMasteryUpdate& v) {
    j["id"] = v.id; 
    j["gameId"] = v.gameId; 
    j["playerId"] = v.playerId; 
    j["championId"] = v.championId; 
    j["hasLeveledUp"] = v.hasLeveledUp; 
    j["level"] = v.level; 
    j["pointsBeforeGame"] = v.pointsBeforeGame; 
    j["pointsGained"] = v.pointsGained; 
    j["pointsGainedIndividualContribution"] = v.pointsGainedIndividualContribution; 
    j["bonusPointsGained"] = v.bonusPointsGained; 
    j["pointsSinceLastLevelBeforeGame"] = v.pointsSinceLastLevelBeforeGame; 
    j["pointsUntilNextLevelBeforeGame"] = v.pointsUntilNextLevelBeforeGame; 
    j["pointsUntilNextLevelAfterGame"] = v.pointsUntilNextLevelAfterGame; 
    j["grade"] = v.grade; 
    j["score"] = v.score; 
    j["levelUpList"] = v.levelUpList; 
    j["memberGrades"] = v.memberGrades; 
  }
  inline void from_json(const json& j, LolEndOfGameChampionMasteryUpdate& v) {
    v.id = j.at("id").get<std::string>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.playerId = j.at("playerId").get<uint64_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.hasLeveledUp = j.at("hasLeveledUp").get<bool>(); 
    v.level = j.at("level").get<int64_t>(); 
    v.pointsBeforeGame = j.at("pointsBeforeGame").get<int64_t>(); 
    v.pointsGained = j.at("pointsGained").get<int64_t>(); 
    v.pointsGainedIndividualContribution = j.at("pointsGainedIndividualContribution").get<int64_t>(); 
    v.bonusPointsGained = j.at("bonusPointsGained").get<int64_t>(); 
    v.pointsSinceLastLevelBeforeGame = j.at("pointsSinceLastLevelBeforeGame").get<int64_t>(); 
    v.pointsUntilNextLevelBeforeGame = j.at("pointsUntilNextLevelBeforeGame").get<int64_t>(); 
    v.pointsUntilNextLevelAfterGame = j.at("pointsUntilNextLevelAfterGame").get<int64_t>(); 
    v.grade = j.at("grade").get<std::string>(); 
    v.score = j.at("score").get<int64_t>(); 
    v.levelUpList = j.at("levelUpList").get<std::vector<LolEndOfGameChampionMasteryMini>>(); 
    v.memberGrades = j.at("memberGrades").get<std::vector<LolEndOfGameChampionMasteryGrade>>(); 
  }
}