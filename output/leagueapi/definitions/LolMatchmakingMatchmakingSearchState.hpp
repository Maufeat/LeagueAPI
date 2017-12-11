#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolMatchmakingMatchmakingSearchState { /**/ 
    AbandonedLowPriorityQueue_e = 1, /**/ 
    Canceled_e = 2, /**/ 
    Error_e = 5, /**/ 
    Found_e = 4, /**/ 
    Invalid_e = 0, /**/ 
    Searching_e = 3, /**/ 
    ServiceError_e = 6, /**/ 
    ServiceShutdown_e = 7, /**/ 
  };
  static void to_json(json& j, const LolMatchmakingMatchmakingSearchState& v) {
    switch(v) { 
    case LolMatchmakingMatchmakingSearchState::AbandonedLowPriorityQueue_e:
      j = "AbandonedLowPriorityQueue";
    break;
    case LolMatchmakingMatchmakingSearchState::Canceled_e:
      j = "Canceled";
    break;
    case LolMatchmakingMatchmakingSearchState::Error_e:
      j = "Error";
    break;
    case LolMatchmakingMatchmakingSearchState::Found_e:
      j = "Found";
    break;
    case LolMatchmakingMatchmakingSearchState::Invalid_e:
      j = "Invalid";
    break;
    case LolMatchmakingMatchmakingSearchState::Searching_e:
      j = "Searching";
    break;
    case LolMatchmakingMatchmakingSearchState::ServiceError_e:
      j = "ServiceError";
    break;
    case LolMatchmakingMatchmakingSearchState::ServiceShutdown_e:
      j = "ServiceShutdown";
    break;
    };
  }
  static void from_json(const json& j, LolMatchmakingMatchmakingSearchState& v) {
    auto s = j.get<std::string>(); 
    if(s == "AbandonedLowPriorityQueue") {
      v = LolMatchmakingMatchmakingSearchState::AbandonedLowPriorityQueue_e;
      return;
    } 
    if(s == "Canceled") {
      v = LolMatchmakingMatchmakingSearchState::Canceled_e;
      return;
    } 
    if(s == "Error") {
      v = LolMatchmakingMatchmakingSearchState::Error_e;
      return;
    } 
    if(s == "Found") {
      v = LolMatchmakingMatchmakingSearchState::Found_e;
      return;
    } 
    if(s == "Invalid") {
      v = LolMatchmakingMatchmakingSearchState::Invalid_e;
      return;
    } 
    if(s == "Searching") {
      v = LolMatchmakingMatchmakingSearchState::Searching_e;
      return;
    } 
    if(s == "ServiceError") {
      v = LolMatchmakingMatchmakingSearchState::ServiceError_e;
      return;
    } 
    if(s == "ServiceShutdown") {
      v = LolMatchmakingMatchmakingSearchState::ServiceShutdown_e;
      return;
    } 
  }
} 