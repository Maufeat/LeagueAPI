#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolReplaysReplaysConfiguration { 
    std::string minServerVersion;
    bool isReplaysForEndOfGameEnabled;
    bool isPlayingGame;
    bool isLoggedIn;
    bool isPlayingReplay;
    std::string gameVersion;
    double minutesUntilReplayConsideredLost;
    bool isReplaysEnabled;
    bool isReplaysForMatchHistoryEnabled;
    bool isPatching; 
  };
  inline void to_json(json& j, const LolReplaysReplaysConfiguration& v) {
    j["minServerVersion"] = v.minServerVersion; 
    j["isReplaysForEndOfGameEnabled"] = v.isReplaysForEndOfGameEnabled; 
    j["isPlayingGame"] = v.isPlayingGame; 
    j["isLoggedIn"] = v.isLoggedIn; 
    j["isPlayingReplay"] = v.isPlayingReplay; 
    j["gameVersion"] = v.gameVersion; 
    j["minutesUntilReplayConsideredLost"] = v.minutesUntilReplayConsideredLost; 
    j["isReplaysEnabled"] = v.isReplaysEnabled; 
    j["isReplaysForMatchHistoryEnabled"] = v.isReplaysForMatchHistoryEnabled; 
    j["isPatching"] = v.isPatching; 
  }
  inline void from_json(const json& j, LolReplaysReplaysConfiguration& v) {
    v.minServerVersion = j.at("minServerVersion").get<std::string>(); 
    v.isReplaysForEndOfGameEnabled = j.at("isReplaysForEndOfGameEnabled").get<bool>(); 
    v.isPlayingGame = j.at("isPlayingGame").get<bool>(); 
    v.isLoggedIn = j.at("isLoggedIn").get<bool>(); 
    v.isPlayingReplay = j.at("isPlayingReplay").get<bool>(); 
    v.gameVersion = j.at("gameVersion").get<std::string>(); 
    v.minutesUntilReplayConsideredLost = j.at("minutesUntilReplayConsideredLost").get<double>(); 
    v.isReplaysEnabled = j.at("isReplaysEnabled").get<bool>(); 
    v.isReplaysForMatchHistoryEnabled = j.at("isReplaysForMatchHistoryEnabled").get<bool>(); 
    v.isPatching = j.at("isPatching").get<bool>(); 
  }
}