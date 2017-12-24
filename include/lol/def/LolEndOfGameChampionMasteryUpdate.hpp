#pragma once
#include "../base_def.hpp" 
#include "LolEndOfGameChampionMasteryMini.hpp"
#include "LolEndOfGameChampionMasteryGrade.hpp"
namespace lol {
  struct LolEndOfGameChampionMasteryUpdate { 
    int64_t pointsUntilNextLevelBeforeGame;
    uint64_t gameId;
    int64_t bonusPointsGained;
    bool hasLeveledUp;
    int64_t score;
    int64_t pointsBeforeGame;
    std::vector<LolEndOfGameChampionMasteryGrade> memberGrades;
    uint64_t playerId;
    int64_t pointsSinceLastLevelBeforeGame;
    int64_t pointsUntilNextLevelAfterGame;
    int32_t championId;
    std::vector<LolEndOfGameChampionMasteryMini> levelUpList;
    std::string id;
    int64_t pointsGained;
    int64_t level;
    std::string grade;
    int64_t pointsGainedIndividualContribution; 
  };
  inline void to_json(json& j, const LolEndOfGameChampionMasteryUpdate& v) {
    j["pointsUntilNextLevelBeforeGame"] = v.pointsUntilNextLevelBeforeGame; 
    j["gameId"] = v.gameId; 
    j["bonusPointsGained"] = v.bonusPointsGained; 
    j["hasLeveledUp"] = v.hasLeveledUp; 
    j["score"] = v.score; 
    j["pointsBeforeGame"] = v.pointsBeforeGame; 
    j["memberGrades"] = v.memberGrades; 
    j["playerId"] = v.playerId; 
    j["pointsSinceLastLevelBeforeGame"] = v.pointsSinceLastLevelBeforeGame; 
    j["pointsUntilNextLevelAfterGame"] = v.pointsUntilNextLevelAfterGame; 
    j["championId"] = v.championId; 
    j["levelUpList"] = v.levelUpList; 
    j["id"] = v.id; 
    j["pointsGained"] = v.pointsGained; 
    j["level"] = v.level; 
    j["grade"] = v.grade; 
    j["pointsGainedIndividualContribution"] = v.pointsGainedIndividualContribution; 
  }
  inline void from_json(const json& j, LolEndOfGameChampionMasteryUpdate& v) {
    v.pointsUntilNextLevelBeforeGame = j.at("pointsUntilNextLevelBeforeGame").get<int64_t>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.bonusPointsGained = j.at("bonusPointsGained").get<int64_t>(); 
    v.hasLeveledUp = j.at("hasLeveledUp").get<bool>(); 
    v.score = j.at("score").get<int64_t>(); 
    v.pointsBeforeGame = j.at("pointsBeforeGame").get<int64_t>(); 
    v.memberGrades = j.at("memberGrades").get<std::vector<LolEndOfGameChampionMasteryGrade>>(); 
    v.playerId = j.at("playerId").get<uint64_t>(); 
    v.pointsSinceLastLevelBeforeGame = j.at("pointsSinceLastLevelBeforeGame").get<int64_t>(); 
    v.pointsUntilNextLevelAfterGame = j.at("pointsUntilNextLevelAfterGame").get<int64_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.levelUpList = j.at("levelUpList").get<std::vector<LolEndOfGameChampionMasteryMini>>(); 
    v.id = j.at("id").get<std::string>(); 
    v.pointsGained = j.at("pointsGained").get<int64_t>(); 
    v.level = j.at("level").get<int64_t>(); 
    v.grade = j.at("grade").get<std::string>(); 
    v.pointsGainedIndividualContribution = j.at("pointsGainedIndividualContribution").get<int64_t>(); 
  }
}