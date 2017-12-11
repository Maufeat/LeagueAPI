#pragma once
#include <json.hpp>
#include <optional>
namespace nlohmann {
  template <typename T>
  struct adl_serializer<std::optional<T>> {
    static void to_json(json& j, const std::optional<T>& opt) {
      if(opt)
        j = *opt;
      else
        j = nullptr;
    }
    static void from_json(const json& j, std::optional<T>& opt) {
      if(j.is_null())
        opt.reset();
      else
        opt = j.get<T>();
    }
  };
}
namespace leagueapi {
  using json = nlohmann::json;
  using std::to_string;
  inline std::string to_string(const std::string& v) {
	  return v;
  }
  inline std::string to_string(const json& j) {
	  if (j.is_string())
		  return j.get<std::string>();
	  return j.dump();
  }
  template<typename T>
  inline std::optional<std::string> to_string(const std::optional<T>& o) {
	  if (o)
		  return to_string(*o);
	  return std::nullopt;
  }
}
