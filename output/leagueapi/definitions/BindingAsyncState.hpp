#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class BindingAsyncState { /*Possible states of an asynchronous operation.*/ 
    Cancelled_e = 3, /*The operation was cancelled*/ 
    Cancelling_e = 2, /*A request to cancel the operation has been made*/ 
    Failed_e = 5, /*The operation encountered an error*/ 
    None_e = 0, /*Invalid state*/ 
    Running_e = 1, /*The operation is in flight*/ 
    Succeeded_e = 4, /*The operation completed successfully*/ 
  };
  static void to_json(json& j, const BindingAsyncState& v) {
    switch(v) { 
    case BindingAsyncState::Cancelled_e:
      j = "Cancelled";
    break;
    case BindingAsyncState::Cancelling_e:
      j = "Cancelling";
    break;
    case BindingAsyncState::Failed_e:
      j = "Failed";
    break;
    case BindingAsyncState::None_e:
      j = "None";
    break;
    case BindingAsyncState::Running_e:
      j = "Running";
    break;
    case BindingAsyncState::Succeeded_e:
      j = "Succeeded";
    break;
    };
  }
  static void from_json(const json& j, BindingAsyncState& v) {
    auto s = j.get<std::string>(); 
    if(s == "Cancelled") {
      v = BindingAsyncState::Cancelled_e;
      return;
    } 
    if(s == "Cancelling") {
      v = BindingAsyncState::Cancelling_e;
      return;
    } 
    if(s == "Failed") {
      v = BindingAsyncState::Failed_e;
      return;
    } 
    if(s == "None") {
      v = BindingAsyncState::None_e;
      return;
    } 
    if(s == "Running") {
      v = BindingAsyncState::Running_e;
      return;
    } 
    if(s == "Succeeded") {
      v = BindingAsyncState::Succeeded_e;
      return;
    } 
  }
} 