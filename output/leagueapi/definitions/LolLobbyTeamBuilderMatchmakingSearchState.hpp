#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolLobbyTeamBuilderMatchmakingSearchState { /**/ 
    AbandonedLowPriorityQueue_e = 1, /**/ 
    Canceled_e = 2, /**/ 
    Error_e = 5, /**/ 
    Found_e = 4, /**/ 
    Invalid_e = 0, /**/ 
    Searching_e = 3, /**/ 
    ServiceError_e = 6, /**/ 
    ServiceShutdown_e = 7, /**/ 
  };
  static void to_json(json& j, const LolLobbyTeamBuilderMatchmakingSearchState& v) {
    switch(v) { 
    case LolLobbyTeamBuilderMatchmakingSearchState::AbandonedLowPriorityQueue_e:
      j = "AbandonedLowPriorityQueue";
    break;
    case LolLobbyTeamBuilderMatchmakingSearchState::Canceled_e:
      j = "Canceled";
    break;
    case LolLobbyTeamBuilderMatchmakingSearchState::Error_e:
      j = "Error";
    break;
    case LolLobbyTeamBuilderMatchmakingSearchState::Found_e:
      j = "Found";
    break;
    case LolLobbyTeamBuilderMatchmakingSearchState::Invalid_e:
      j = "Invalid";
    break;
    case LolLobbyTeamBuilderMatchmakingSearchState::Searching_e:
      j = "Searching";
    break;
    case LolLobbyTeamBuilderMatchmakingSearchState::ServiceError_e:
      j = "ServiceError";
    break;
    case LolLobbyTeamBuilderMatchmakingSearchState::ServiceShutdown_e:
      j = "ServiceShutdown";
    break;
    };
  }
  static void from_json(const json& j, LolLobbyTeamBuilderMatchmakingSearchState& v) {
    auto s = j.get<std::string>(); 
    if(s == "AbandonedLowPriorityQueue") {
      v = LolLobbyTeamBuilderMatchmakingSearchState::AbandonedLowPriorityQueue_e;
      return;
    } 
    if(s == "Canceled") {
      v = LolLobbyTeamBuilderMatchmakingSearchState::Canceled_e;
      return;
    } 
    if(s == "Error") {
      v = LolLobbyTeamBuilderMatchmakingSearchState::Error_e;
      return;
    } 
    if(s == "Found") {
      v = LolLobbyTeamBuilderMatchmakingSearchState::Found_e;
      return;
    } 
    if(s == "Invalid") {
      v = LolLobbyTeamBuilderMatchmakingSearchState::Invalid_e;
      return;
    } 
    if(s == "Searching") {
      v = LolLobbyTeamBuilderMatchmakingSearchState::Searching_e;
      return;
    } 
    if(s == "ServiceError") {
      v = LolLobbyTeamBuilderMatchmakingSearchState::ServiceError_e;
      return;
    } 
    if(s == "ServiceShutdown") {
      v = LolLobbyTeamBuilderMatchmakingSearchState::ServiceShutdown_e;
      return;
    } 
  }
} 