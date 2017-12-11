#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class PluginThreadingModel { /**/ 
    concurrent_e = 3, /**/ 
    dedicated_e = 1, /**/ 
    parallel_e = 4, /**/ 
    sequential_e = 2, /**/ 
  };
  static void to_json(json& j, const PluginThreadingModel& v) {
    switch(v) { 
    case PluginThreadingModel::concurrent_e:
      j = "concurrent";
    break;
    case PluginThreadingModel::dedicated_e:
      j = "dedicated";
    break;
    case PluginThreadingModel::parallel_e:
      j = "parallel";
    break;
    case PluginThreadingModel::sequential_e:
      j = "sequential";
    break;
    };
  }
  static void from_json(const json& j, PluginThreadingModel& v) {
    auto s = j.get<std::string>(); 
    if(s == "concurrent") {
      v = PluginThreadingModel::concurrent_e;
      return;
    } 
    if(s == "dedicated") {
      v = PluginThreadingModel::dedicated_e;
      return;
    } 
    if(s == "parallel") {
      v = PluginThreadingModel::parallel_e;
      return;
    } 
    if(s == "sequential") {
      v = PluginThreadingModel::sequential_e;
      return;
    } 
  }
} 