#pragma once

#include "Post/IPostFilter.hpp"

namespace fl
{
	class FL_EXPORT FilterFxaa :
		public IPostFilter
	{
	private:
		UniformHandler *m_uniformScene;

		float m_spanMax;
	public:
		FilterFxaa(const GraphicsStage &graphicsStage);

		~FilterFxaa();

		void Render(const CommandBuffer &commandBuffer) override;

		float GetSpanMax() const { return m_spanMax; }

		void SetSpanMax(const float &spanMax) { m_spanMax = spanMax; }
	};
}