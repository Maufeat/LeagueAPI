#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolReplaysReplaysConfiguration { 
    double minutesUntilReplayConsideredLost;
    bool isLoggedIn;
    bool isReplaysForEndOfGameEnabled;
    bool isReplaysEnabled;
    bool isPlayingReplay;
    std::string minServerVersion;
    bool isPlayingGame;
    bool isPatching;
    std::string gameVersion;
    bool isReplaysForMatchHistoryEnabled; 
  };
  inline void to_json(json& j, const LolReplaysReplaysConfiguration& v) {
    j["minutesUntilReplayConsideredLost"] = v.minutesUntilReplayConsideredLost; 
    j["isLoggedIn"] = v.isLoggedIn; 
    j["isReplaysForEndOfGameEnabled"] = v.isReplaysForEndOfGameEnabled; 
    j["isReplaysEnabled"] = v.isReplaysEnabled; 
    j["isPlayingReplay"] = v.isPlayingReplay; 
    j["minServerVersion"] = v.minServerVersion; 
    j["isPlayingGame"] = v.isPlayingGame; 
    j["isPatching"] = v.isPatching; 
    j["gameVersion"] = v.gameVersion; 
    j["isReplaysForMatchHistoryEnabled"] = v.isReplaysForMatchHistoryEnabled; 
  }
  inline void from_json(const json& j, LolReplaysReplaysConfiguration& v) {
    v.minutesUntilReplayConsideredLost = j.at("minutesUntilReplayConsideredLost").get<double>(); 
    v.isLoggedIn = j.at("isLoggedIn").get<bool>(); 
    v.isReplaysForEndOfGameEnabled = j.at("isReplaysForEndOfGameEnabled").get<bool>(); 
    v.isReplaysEnabled = j.at("isReplaysEnabled").get<bool>(); 
    v.isPlayingReplay = j.at("isPlayingReplay").get<bool>(); 
    v.minServerVersion = j.at("minServerVersion").get<std::string>(); 
    v.isPlayingGame = j.at("isPlayingGame").get<bool>(); 
    v.isPatching = j.at("isPatching").get<bool>(); 
    v.gameVersion = j.at("gameVersion").get<std::string>(); 
    v.isReplaysForMatchHistoryEnabled = j.at("isReplaysForMatchHistoryEnabled").get<bool>(); 
  }
}