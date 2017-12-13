#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct BindingAsyncState {  
    Cancelled_e = 3,
    Cancelling_e = 2,
    Failed_e = 5,
    None_e = 0,
    Running_e = 1,
    Succeeded_e = 4,
  };
  void to_json(json& j, const BindingAsyncState& v) {
  if(v == BindingAsyncState::Cancelled_e) {
    j = "Cancelled";
    return;
  }
  if(v == BindingAsyncState::Cancelling_e) {
    j = "Cancelling";
    return;
  }
  if(v == BindingAsyncState::Failed_e) {
    j = "Failed";
    return;
  }
  if(v == BindingAsyncState::None_e) {
    j = "None";
    return;
  }
  if(v == BindingAsyncState::Running_e) {
    j = "Running";
    return;
  }
  if(v == BindingAsyncState::Succeeded_e) {
    j = "Succeeded";
    return;
  }
  }
  void from_json(const json& j, BindingAsyncState& v) {
  if(j.get<std::string>() == "Cancelled") {
    v = BindingAsyncState::Cancelled_e;
    return;
  } 
  if(j.get<std::string>() == "Cancelling") {
    v = BindingAsyncState::Cancelling_e;
    return;
  } 
  if(j.get<std::string>() == "Failed") {
    v = BindingAsyncState::Failed_e;
    return;
  } 
  if(j.get<std::string>() == "None") {
    v = BindingAsyncState::None_e;
    return;
  } 
  if(j.get<std::string>() == "Running") {
    v = BindingAsyncState::Running_e;
    return;
  } 
  if(j.get<std::string>() == "Succeeded") {
    v = BindingAsyncState::Succeeded_e;
    return;
  } 
  }
}