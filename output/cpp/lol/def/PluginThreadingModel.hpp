#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct PluginThreadingModel {  
    concurrent_e = 3,
    dedicated_e = 1,
    parallel_e = 4,
    sequential_e = 2,
  };
  inline void to_json(json& j, const PluginThreadingModel& v) {
    if(v == PluginThreadingModel::concurrent_e) {
      j = "concurrent";
      return;
    }
    if(v == PluginThreadingModel::dedicated_e) {
      j = "dedicated";
      return;
    }
    if(v == PluginThreadingModel::parallel_e) {
      j = "parallel";
      return;
    }
    if(v == PluginThreadingModel::sequential_e) {
      j = "sequential";
      return;
    }
  }
  inline void from_json(const json& j, PluginThreadingModel& v) {
    if(j.get<std::string>() == "concurrent") {
      v = PluginThreadingModel::concurrent_e;
      return;
    } 
    if(j.get<std::string>() == "dedicated") {
      v = PluginThreadingModel::dedicated_e;
      return;
    } 
    if(j.get<std::string>() == "parallel") {
      v = PluginThreadingModel::parallel_e;
      return;
    } 
    if(j.get<std::string>() == "sequential") {
      v = PluginThreadingModel::sequential_e;
      return;
    } 
  }
}